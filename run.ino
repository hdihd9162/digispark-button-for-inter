#include "DigiKeyboard.h"
void setup() {
pinMode(0, INPUT);
pinMode(1, INPUT);
//pinMode(2, INPUT);
}

void loop() {

//if(digitalRead(0)==HIGH){
//
//DigiKeyboard.print("test0");
//DigiKeyboard.delay(50);
//
//}

if(digitalRead(1)==HIGH){


DigiKeyboard.sendKeyStroke(KEY_ENTER);  
DigiKeyboard.delay(350);

}

DigiKeyboard.delay(50);

}
