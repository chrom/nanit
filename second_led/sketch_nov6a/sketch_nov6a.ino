#include <NanitLib.h> // включаємо бібліотеку(include library)

void setup() {
  Nanit_Base_Start(); // ініціалізація Наніта(Nanit initialization)
}

void loop() {
  // Команда для включення вбудованого світлодіода в Nanit
  GET_NANIT.BuildinRGB(random(255), random(255), random(255));
  delay(1000); // чекаємо 1 сек(wait 1 sec)
}