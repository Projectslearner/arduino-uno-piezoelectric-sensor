# Piezoelectric Sensor with LED Indicator

#### Project Overview

This project uses a Piezoelectric sensor to detect vibrations or impacts. When the sensor detects a vibration exceeding a specified threshold, an LED lights up. The sensor readings and LED status are displayed on the Serial Monitor.

#### Components Needed

1. **Arduino Board**
2. **Piezoelectric Sensor**
3. **LED**
4. **Resistor (for the LED, e.g., 220Ω)**
5. **Jumper Wires**
6. **Breadboard (optional)**

### Block Diagram



#### Pin Connections

1. **Piezoelectric Sensor:**
   - **Signal Pin**: Connect to analog pin A1 on the Arduino
   - **Power Pin (VCC)**: Connect to the Arduino's 5V pin
   - **Ground

Pin (GND)**: Connect to the Arduino's GND pin

2. **LED:**
   - **Anode (+)**: Connect to Arduino digital pin 12 through a current-limiting resistor (e.g., 220Ω)
   - **Cathode (-)**: Connect to Arduino GND

#### Instructions

1. **Set Up the Circuit:**
   - Connect the Piezoelectric sensor to the Arduino board as per the pin connections mentioned above.
   - Connect the LED to digital pin 12 on the Arduino with a resistor in series to limit the current.
   - Ensure all components are properly grounded and connected to the power supply.

2. **Initialize the System:**
   - Configure the LED pin as an output.
   - Begin serial communication at a baud rate of 9600 to enable data transmission between the Arduino and a connected device (e.g., computer).

3. **Read Sensor Values:**
   - In the `loop()` function, read the analog voltage value from the Piezoelectric sensor connected to the specified analog pin (A1).
   - Print the sensor value to the Serial Monitor for real-time feedback.

4. **Check for Vibration:**
   - Compare the sensor value to a predefined threshold (e.g., 100).
   - If the sensor value exceeds the threshold, turn on the LED and print the status to the Serial Monitor.
   - If the sensor value is below the threshold, turn off the LED and print the status to the Serial Monitor.

5. **Delay and Repeat:**
   - Use the `delay()` function to introduce a short delay between sensor readings, ensuring stability and preventing data flooding in the Serial Monitor.

#### Applications

- **Impact Detection:** Use the setup to detect impacts or vibrations in various applications such as security systems, machinery monitoring, or interactive projects.
- **Sound Detection:** The Piezoelectric sensor can also detect sound vibrations, making it useful for sound-activated projects.
- **Educational Projects:** Demonstrate the principles of Piezoelectric sensors and threshold-based detection in educational settings using this simple yet effective project.

---

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner