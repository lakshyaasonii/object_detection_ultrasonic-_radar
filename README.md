Ultrasonic Sensor Based Object Detection Radar 🚀

This project is a mini Radar System built using Arduino, Ultrasonic Sensor, Servo Motor, LEDs, and Buzzer.
It detects objects within a range of 50 cm, displays the distance and angle on the Arduino IDE Serial Monitor, and provides visual + audio alerts.

📌 Features

Object detection up to 50 cm

Real-time distance and angle display on Serial Monitor

Visual alert system using LEDs

Audio alert using Buzzer

Servo motor used to scan surroundings (0°–180°)

🔧 Components Used

Arduino UNO

Ultrasonic Sensor (HC-SR04)

Servo Motor (SG90)

LEDs (White, Orange, Yellow, Green)

Buzzer

Jumper Wires & Breadboard

⚡ Working Principle

50–40 cm → ⚪ White LED glows

40–30 cm → 🟠 Orange LED glows

30–20 cm → 🟡 Yellow LED glows

20–10 cm → 🟢 Green LED glows

10–2 cm → All LEDs ON + Buzzer alert 🚨

The ultrasonic sensor sends out sound waves and measures the time taken for the echo to return, calculating the distance.
The servo motor rotates to cover angles from 0° to 180°, creating a radar-like scanning effect.

🚀 How to Run

Step01 - Clone this repository.
<br>
git clone https://github.com/lakshyaasonii/object_detection_ultrasonic-_radar.git
<br>
Step02 - Open radar.ino in Arduino IDE.
<br>
Step03 - Connect Arduino UNO and upload the code.
<br>
Step04 - Open Serial Monitor at 9600 baud rate to see distance & angle.

📚 Key Learnings

Sensor interfacing with Arduino

Distance measurement using HC-SR04

Servo motor control for scanning

Hardware–software integration in C++

Designing an alert system with LEDs + buzzer

🤝 Contribution
Feel free to fork this repo and improve it. Pull requests are welcome!

Author- LAKSHYA SONI
