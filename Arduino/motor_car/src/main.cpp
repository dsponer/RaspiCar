#include <Arduino.h>

#define EN  7
#define IA  4
#define IB  5
#define PWM 6

void setup() {
  // put your setup code here, to run once:
  for (int i = 4; i < 8; i++)
  { 
    pinMode(i, OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(EN, HIGH);
  digitalWrite(IA, HIGH);
  digitalWrite(IB, LOW);
  for (int i = 30; i < 50; i++)
  {
    analogWrite(PWM, i);
    delay(100);
  }
  digitalWrite(EN, LOW);
  digitalWrite(IA, HIGH);
  digitalWrite(IB, HIGH);
  analogWrite(PWM, 0);
  delay(1000);
}