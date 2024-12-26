#include <NanitLib.h> // включаємо бібліотеку(include library)

byte ledPin = P3_2; // пін для світлодіода(pin for the LED)

void setup() {
  Nanit_Base_Start(); // ініціалізація Наніта(Nanit initialization)
  pinMode(ledPin, OUTPUT); // світлодіод як вихід(LED as output)
}


void loop() {
  digitalWrite(ledPin, 1); // вмикаємо напругу для включення світлодіода(turn on the voltage to turn on the LED)
  delay(1500);             // чекаємо 1 сек(wait 1 sec)
  digitalWrite(ledPin, 0); // вимикаємо напругу для включення світлодіода(turn off the voltage to turn on the LED)
  delay(1000);             // чекаємо 1 сек(wait 1 sec)
}

