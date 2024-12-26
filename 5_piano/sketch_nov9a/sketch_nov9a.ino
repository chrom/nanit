#include <NanitLib.h>

const int buttonPins[] = { P4_1, P4_2, P4_3, P4_4 }; // Масив для кнопок
const int buzzPin = P5_1; // Пін для підключення динаміка

// Частоти нот для кожної кнопки
const int tones[] = { 261, 294, 330, 349 };

void setup() {
  Nanit_Base_Start(); // Ініціалізація Nanit
  for (int i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP); // Налаштування кнопок як вхід з підтягуючим резистором
  }
  pinMode(buzzPin, OUTPUT); // Налаштування піну динаміка як вихід
  digitalWrite(buzzPin, LOW); // Вимкнення динаміка
}

void loop() {
  for (int i = 0; i < 4; i++) {
    if (!digitalRead(buttonPins[i])) { // Якщо кнопка натиснута
      tone(buzzPin, tones[i], 100); // Вмикаємо динамік з відповідною частотою
    }
  }
}
