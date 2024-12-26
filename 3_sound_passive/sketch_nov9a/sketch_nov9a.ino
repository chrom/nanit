#include <NanitLib.h>

int piezoPin = P4_2;  // пін для п'єзо(pin for piezo)

// Структура для нот
struct Note {
  int frequency; // Частота
  int duration;  // Тривалість
};

// Створення масиву нот
Note melody[] = {
  { 261, 500 }, // C4
  { 294, 500 }, // D4
  { 330, 500 }, // E4
  { 392, 500 }, // G4
  { 440, 500 }  // A4
};

void setup() {
  Nanit_Base_Start(); // Ініціалізація пристрою Nanit
  pinMode(piezoPin, OUTPUT); // Встановлення піна piezoPin в режим виводу
}

void loop() {
  // Виконання мелодії
  for (int i = 0; i < 5; i++) { // Проходимо через 5 нот
    tone(piezoPin, melody[i].frequency); // Відтворення ноти з масиву
    delay(melody[i].duration); // Затримка для відповідної тривалості
  }
  
  noTone(piezoPin); // Зупинка відтворення звуку
  delay(2000); // Затримка на 2 секунди перед повтором мелодії
}
