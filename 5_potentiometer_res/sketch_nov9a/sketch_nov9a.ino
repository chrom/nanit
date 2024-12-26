#include <NanitLib.h>

// работа з потенціометром
int pot = P10_2;  // Пін, до якого підключена кнопка

void setup() {
  Nanit_Base_Start();  // Ініціалізація Nanit
  pinMode(pot, INPUT);  // Встановлюємо пін кнопки в режим входу
  Serial.begin(9600);  // Ініціалізація послідовного зв'язку
}

void loop() {
  int potVal = analogRead(pot);
  Serial.print("Button state is: ");  // Виводимо текст
  Serial.println(analogRead(potVal));  // Виводимо стан кнопки
  delay(100);  // Затримка 100 мілісекунд
}