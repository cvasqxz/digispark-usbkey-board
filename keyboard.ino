#include "DigiKeyboard.h"

int LED_PIN = 1;
int KEY_DELAY = 1000;


void setup() {
  pinMode(LED_PIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_PIN, HIGH);
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(KEY_DELAY);
  
  // Minimizar todo
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_GUI_LEFT);
  DigiKeyboard.delay(KEY_DELAY);

  // Ejecutar CMD
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(KEY_DELAY);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(KEY_DELAY);

  // Abrir notepad y hola mundo
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(KEY_DELAY);
  
  DigiKeyboard.println("Hola mundo");

  digitalWrite(LED_PIN, LOW);

  for(;;){ /*empty*/ }
}
