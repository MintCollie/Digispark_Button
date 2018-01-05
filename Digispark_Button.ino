#include "DigiKeyboard.h"

void setup() {
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(5, INPUT);
}

void loop() {
  if(digitalRead(0)==HIGH){   
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("H:\\Battle net\\Overwatch\\Overwatch.exe");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
  }
DigiKeyboard.delay(100);

}

