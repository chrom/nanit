#include <NanitLib.h> 

void setup() {
  Nanit_Base_Start();         // Ініціалізація Nanit
  NanitInfo();             // Ініціалізація дисплею
}

void loop() {
  displayText("Hello, World!"); // Вершина тексту на дисплеї
  delay(2000);                  // Затримка на 2 секунди
  displayText("Welcome to Nanit!"); // Вершина нового тексту
  delay(2000);                  // Затримка на 2 секунди
}

void displayText(const char* text) {
  Display_Clear();             // Очистка дисплею
  Display_SetCursor(0, 0);     // Встановлення курсора в початок
  Display_Print(text);         // Вивід тексту на дисплей
}
