# 🔥 Fire System

This project is a **Fire Detection System** that utilizes the ESP8266 NodeMCU to monitor fire hazards and respond accordingly. The system detects fire using a flame sensor and triggers a series of actions to mitigate the risk.

## 📦 Components Used

### 1. ESP8266 NodeMCU
- **WiFi Connectivity:** Connects to WiFi to send notifications.
- **Processing:** Processes sensor input and controls output devices.

### 2. Flame Sensor
- **Fire Detection:** Detects fire by measuring infrared light emitted by flames.
- **Output:** Provides a digital signal (LOW when fire is detected, HIGH when no fire is detected).

### 3. Red LED
- **Indicator:** Lights up when the flame sensor detects a fire.

### 4. Yellow LED
- **Indicator:** Lights up when no fire is detected.

### 5. Buzzer
- **Alarm:** Sounds an alarm when the flame sensor detects a fire.

### 6. Relay
- **Control External Devices:** Activates or deactivates an external device (e.g., water pump, alarm) based on the flame sensor input.

### 7. WiFi Module (Built-in ESP8266)
- **Email Notification:** Sends an email notification through an SMTP server using the `EmailSender` library.

## 🚨 System Functionality

- **Fire Detection:** The flame sensor monitors for the presence of fire.
- **Response:** When fire is detected, the system:
  - Triggers the buzzer.
  - Turns on the red LED.
  - Sends an email notification.
  - Activates the relay to control an external device (e.g., water pump, alarm).

This project effectively demonstrates how IoT can be used to enhance fire safety through real-time monitoring and automated response mechanisms.
