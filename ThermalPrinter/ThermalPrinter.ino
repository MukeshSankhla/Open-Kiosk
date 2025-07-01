#include <ArduinoJson.h>
#include <HardwareSerial.h>

HardwareSerial printer(2); // UART2 for actual printer: TX=43, RX=44
#define BUFFER_SIZE 1024

String inputBuffer = "";

void setup() {
  Serial.begin(9600);        // Serial to communicate with Web Serial (browser)
  printer.begin(9600, SERIAL_8N1, 43, 44); // Connect to printer on UART2
  Serial.println("ESP32 Printer Ready");
}

void loop() {
  // Read incoming serial data (from browser/Web Serial)
  while (Serial.available()) {
    char ch = Serial.read();
    if (ch == '\n') {
      handleJson(inputBuffer);
      inputBuffer = ""; // Clear buffer for next receipt
    } else {
      inputBuffer += ch;
    }
  }
}

void handleJson(const String& jsonString) {
  StaticJsonDocument<BUFFER_SIZE> doc;
  DeserializationError error = deserializeJson(doc, jsonString);

  if (error) {
    Serial.print("JSON parse failed: ");
    Serial.println(error.c_str());
    return;
  }

  // Print header
  printer.print(doc["store"]["name"].as<const char*>());
  printer.print("  TAX ID:");
  printer.println(doc["store"]["gst"].as<const char*>());

  // Print bill info
  printer.print("BILL.No:");
  printer.println(doc["receipt"]["bill_no"].as<const char*>());
  printer.print("Date: ");
  printer.print(doc["receipt"]["date"].as<const char*>());
  printer.print(", ");
  printer.println(doc["receipt"]["time"].as<const char*>());
  printer.println("================================");

  JsonArray items = doc["items"].as<JsonArray>();
  for (int i = 0; i < items.size(); i++) {
    JsonObject item = items[i];
    printer.print(i + 1);
    printer.print(".");
    printer.print(item["name"].as<const char*>());
    printer.print(" ");
    printer.print(item["price"].as<int>()/item["quantity"].as<int>());
    printer.print("x");
    printer.print(item["quantity"].as<int>());
    printer.print(" ");
    printer.println(item["price"].as<int>());
  }

  // Print total
  printer.println("--------------------------------");
  printer.println("Total:              " + String(doc["total"].as<int>()) + " INR");
  printer.println("--------------------------------");

  // Footer
  printer.println(doc["footer"].as<const char*>());
  printer.println("\n\n");

  // Notify browser (optional)
  Serial.println("Done");  // JavaScript waits for this
}
