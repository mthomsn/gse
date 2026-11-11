#include <SoftwareSerial.h>
#include <Servo.h>

// RX, TX. We only use RX (Pin 10) for the receiver
SoftwareSerial RS485Serial(10, 11); 
Servo myServo;

void setup() {
  myServo.attach(9);
  RS485Serial.begin(9600);
  
  // Set initial position
  myServo.write(0);
}

void loop() {
  // Check if data is arriving over the RS-485 line
  if (RS485Serial.available()) {
    char signal = RS485Serial.read();
    
    if (signal == '1') {
      myServo.write(90); // Move when button is pressed
    } 
    else if (signal == '0') {
      myServo.write(0);  // Return when released
    }
  }
}
