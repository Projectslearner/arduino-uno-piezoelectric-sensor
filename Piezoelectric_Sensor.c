/*
    Project name : Arduino Uno Piezoelectric Sensor
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-piezoelectric-sensor
*/

// Pin connected to the piezoelectric sensor
const int sensorPin = A0;

void setup() {
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(sensorPin);  // Read sensor value
  
  Serial.print("Sensor value: ");
  Serial.println(sensorValue);

  delay(500);  // Delay for readability
}
