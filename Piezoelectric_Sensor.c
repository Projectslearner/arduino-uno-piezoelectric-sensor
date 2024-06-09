/*
    Project name : Piezoelectric Sensor
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-piezoelectric-sensor
*/

int sensorOutput = A1; // The analog pin connected to the Piezoelectric sensor
int ledOutput = 12;    // Pin connected to LED
int THRESHOLD = 100;

void setup()
{
  pinMode(ledOutput, OUTPUT); // Declare LED-connected pin as output
  Serial.begin(9600);         // Initialize serial communication at 9600 baud
}

void loop() 
{
  int value = analogRead(sensorOutput); // Read analog voltage from sensor
  Serial.print("Sensor Value: ");
  Serial.println(value); // Print the sensor value to the serial monitor

  if (value >= THRESHOLD) 
  { // Check voltage level from sensor
    digitalWrite(ledOutput, HIGH);
    Serial.println("LED: ON"); // Print LED status to the serial monitor
  } 
  else
  {
    digitalWrite(ledOutput, LOW);
    Serial.println("LED: OFF"); // Print LED status to the serial monitor
  }

  delay(500); // Add a small delay to avoid flooding the serial monitor
}
