#include "DigiKeyboard.h"
const int buttonPin = A3;
int ledPin = 1;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(0, INPUT_PULLUP);
}
void loop() {
  
  
  if(digitalRead(0)== HIGH){
    digitalWrite(ledPin, HIGH);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);  
    
//    delay(500);
  }
  else{                     
    digitalWrite(ledPin, LOW); 
  }                     
  DigiKeyboard.delay(80);
}
