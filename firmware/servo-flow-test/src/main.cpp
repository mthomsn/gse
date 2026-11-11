#include <Arduino.h> 
#include <Servo.h>

Servo flowValve;

const int servoPin = 9;
int closedAngle = 0;
int openAngle = 90;
unsigned long flowDuration = 5000;

void runFlowTest();

void setup() {
  Serial.begin(9600);
  
  flowValve.attach(servoPin);
  flowValve.write(closedAngle);
  
  Serial.println("Mass Flow Test System Ready.");
  Serial.println("Type 'T' and press Enter to begin the flow test.");
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    
    if (command == 'T' || command == 't') {
      runFlowTest();
    }
  }
}

void runFlowTest() {
  Serial.println("Test started: Valve OPENING");
  flowValve.write(openAngle);
  
  delay(flowDuration);
  
  Serial.println("Time's up: Valve CLOSING");
  flowValve.write(closedAngle);
  
  Serial.println("Test complete. Measure your water displacement.");
}
