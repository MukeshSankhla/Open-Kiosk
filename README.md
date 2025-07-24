# Open Kiosk - DIY Point of Sale System 🏪

[![License: CC BY-SA](https://img.shields.io/badge/License-CC%20BY--SA-blue.svg)](https://certification.oshwa.org/in000074.html)
[![Hardware: Open Source](https://img.shields.io/badge/Hardware-Open%20Source-green.svg)](https://certification.oshwa.org/in000074.html)
[![Build Status](https://img.shields.io/badge/Build-Passing-brightgreen.svg)]()

![Open Kiosk Demo](https://github.com/MukeshSankhla/Open-Kiosk/blob/main/images/DIY.png)

**Build your own professional point-of-sale system for retail stores, market vendors, and pop-up shops!**

Open Kiosk is an affordable, open-source POS solution that eliminates recurring subscription fees and vendor lock-in. Create a complete retail kiosk using modern web technologies and real hardware components - perfect for small businesses looking for a customizable, cost-effective solution.

## 🎯 Why Open Kiosk?

- **💰 Cost Effective**: No monthly fees or licensing costs
- **🔓 No Vendor Lock-in**: Own your data and system completely  
- **🛠️ Fully Customizable**: Modify everything to fit your business needs
- **📱 Modern Interface**: Built with latest web technologies
- **🔧 DIY Friendly**: Step-by-step guides for easy assembly

## ✨ Features

| Feature | Description |
|---------|-------------|
| **📦 Inventory Management** | Add, edit, and track your products with categories and pricing |
| **🧾 Thermal Receipt Printing** | Professional receipts with customizable headers and footers |
| **📊 Sales Analytics & Reports** | Real-time sales tracking with daily, weekly, and monthly reports |
| **🎤 Voice Search** | Quick product lookup using voice commands for faster checkout |
| **🎨 Complete Customization** | Brand colors, logos, layouts - make it uniquely yours |
| **☁️ Cloud Sync** | Firebase integration for data backup and multi-device access |
| **📱 Touch Interface** | Intuitive touchscreen interface optimized for retail environments |

## 🛠️ Hardware Requirements

### Core Components
- **LattePanda MU** - Main computing unit (x86 architecture)
- **Seeed Xiao ESP32 S3** - Microcontroller for hardware integration
- **58mm/80mm Thermal Printer** - Receipt printing via UART communication
- **7-15" Touchscreen Display** - Primary user interface
- **3D-Printed Enclosure** - Professional housing (STL files included)

### Optional Components
- **Barcode Scanner** - For product scanning
- **Cash Drawer** - Automatic cash drawer with kick-out functionality  
- **Customer Display** - Secondary display for customer-facing information
- **NFC/RFID Reader** - For contactless payments integration

## 💻 Technology Stack

```
Frontend:    React 18 + Vite + TypeScript
Backend:     Firebase (Firestore + Authentication)  
Hardware:    Python + PySerial for UART communication
UI/UX:       Tailwind CSS + Headless UI
Build Tool:  Vite with hot reload
Testing:     Jest + React Testing Library
```

## 🚀 Quick Start

### Prerequisites
- Node.js 18+ and npm/yarn
- Python 3.8+ with pip
- Basic electronics knowledge
- 3D printer access (or printing service)

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/MukeshSankhla/Open-Kiosk-App.git
   cd Open-Kiosk-App
   ```

2. **Install dependencies**
   ```bash
   npm install
   pip install -r requirements.txt
   ```

3. **Configure Firebase**
   ```bash
   cp .env.example .env
   # Add your Firebase configuration
   ```

4. **Start development server**
   ```bash
   npm run dev
   ```

5. **Hardware Setup**
   - Follow the complete [Hardware Assembly Guide](https://www.hackster.io/mukesh-sankhla/open-kiosk-build-your-own-smart-pos-system-for-retail-stores)
   - Connect thermal printer via UART
   - Configure ESP32 S3 firmware

## 📚 Documentation & Resources

| Resource | Link | Description |
|----------|------|-------------|
| **📖 Complete Build Guide** | [Hackster.io Project](https://www.hackster.io/mukesh-sankhla/open-kiosk-build-your-own-smart-pos-system-for-retail-stores) | Step-by-step hardware and software setup |
| **🎥 Video Tutorial** | [YouTube Demo](https://youtu.be/sL1OeTtPDf0) | Complete walkthrough and demonstration |
| **💻 Software Repository** | [Open-Kiosk-App](https://github.com/MukeshSankhla/Open-Kiosk-App) | Main application code and updates |
| **🏗️ Hardware Files** | [Open-Kiosk Hardware](https://github.com/MukeshSankhla/Open-Kiosk) | 3D models, schematics, and assembly guides |
| **📋 API Documentation** | [Wiki](https://github.com/MukeshSankhla/Open-Kiosk-App/wiki) | API reference and integration guides |

## 🏪 Perfect For

- **Retail Boutiques** - Fashion stores, gift shops, specialty retailers
- **Food & Beverage** - Coffee shops, food trucks, market stalls  
- **Pop-up Shops** - Temporary stores, craft fairs, events
- **Service Businesses** - Salons, repair shops, consultations
- **Mobile Vendors** - Market vendors, traveling merchants

## 🎯 Use Cases & Examples

### Small Retail Store Setup
```
Hardware Cost: ~$300-500
Monthly Savings: $50-100 (vs traditional POS)
ROI Period: 3-6 months
```

### Market Vendor Configuration  
```
Portable Setup: Battery powered option
Offline Mode: Works without internet
Quick Setup: 15-minute deployment
```

## 🤝 Contributing

We welcome contributions! Please see our [Contributing Guidelines](CONTRIBUTING.md) for details.

### Development Setup
1. Fork the repository
2. Create a feature branch: `git checkout -b feature/amazing-feature`
3. Commit changes: `git commit -m 'Add amazing feature'`
4. Push to branch: `git push origin feature/amazing-feature`
5. Open a Pull Request

## 📄 License & Certification

This project is licensed under **Creative Commons Attribution-ShareAlike (CC BY-SA)** and is certified as **Open Source Hardware** by OSHWA.

<img src="https://github.com/user-attachments/assets/c733aeee-eb92-4ec4-8e9a-00a026f79d2d" alt="OSHWA Certification" width="200"/>

**Certification ID**: [IN000074](https://certification.oshwa.org/in000074.html)

## 🆘 Support & Community

- **🐛 Bug Reports**: [GitHub Issues](https://github.com/MukeshSankhla/Open-Kiosk-App/issues)
- **💬 Discussions**: [GitHub Discussions](https://github.com/MukeshSankhla/Open-Kiosk-App/discussions)  
- **📧 Email**: support@openkiosk.dev
- **📱 Community**: [Discord Server](https://discord.gg/openkiosk)

## 🎉 Success Stories

> *"Open Kiosk saved our small bakery $100/month in POS fees and gave us complete control over our system!"* - Sarah's Bakery

> *"Perfect for our farmer's market booth - portable, reliable, and completely customizable."* - Green Valley Farms

## 🗺️ Roadmap

- [ ] **Q3 2025**: Mobile app for inventory management
- [ ] **Q4 2025**: Multi-location support  
- [ ] **Q1 2026**: Advanced analytics dashboard
- [ ] **Q2 2026**: Integration marketplace

---

**⭐ Star this repository if Open Kiosk helps your business!**

*Transform your retail business with a custom POS solution built by you, for you.*

![Visitors](https://visitor-badge.laobi.icu/badge?page_id=MukeshSankhla.Open-Kiosk)
[![GitHub stars](https://img.shields.io/github/stars/MukeshSankhla/Open-Kiosk-App.svg?style=social&label=Star)](https://github.com/MukeshSankhla/Open-Kiosk-App)
