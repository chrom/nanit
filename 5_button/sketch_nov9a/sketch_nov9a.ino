#include <NanitLib.h>

int button = P3_3;  // Пін, до якого підключена кнопка

void setup() {
  Nanit_Base_Start();  // Ініціалізація Nanit
  pinMode(button, INPUT);  // Встановлюємо пін кнопки в режим входу
  Serial.begin(9600);  // Ініціалізація послідовного зв'язку
}

void loop() {
  Serial.print("Button state is: ");  // Виводимо текст
  Serial.println(digitalRead(button));  // Виводимо стан кнопки
  delay(100);  // Затримка 100 мілісекунд
}