#include <NanitLib.h>

byte ledPins[] = {P4_1, P4_2, P4_3, P4_4};  // Масив для світлодіодів (Array for LEDs)
byte AnalogMicro = P5_2;                     // Аналоговий пін для мікрофона (Analog pin for microphone)
bool mode = false;                           // Режим світлодіода (LED mode)

const int LEVEL = 400;                       // Константа для рівня звуку (Constant for sound level)

void setup() {
  Nanit_Base_Start();                        // Ініціалізація Nanit (Nanit initialization)
  Serial.begin(9600);                        // Ініціалізація монітору порта (Serial monitor initialization)
  pinMode(AnalogMicro, INPUT);               // Пін як вхід (Pin as input)

  for (byte i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);             // Налаштування пінів світлодіодів як виходи (Set LED pins as outputs)
  }
}

void loop() {
  int AnalogMicroSignal = analogRead(AnalogMicro);  // Читаємо аналоговий сигнал (Read analog signal)

  if (AnalogMicroSignal > LEVEL) {               // Умова для зміни режиму світлодіода (Condition for changing LED mode)
    ledOn(mode);                               // Увімкнення світлодіодів в залежності від режиму
    mode = !mode;                              // Переключення режиму (Toggle mode)
    delay(200);                                // Затримка 100 мс (Wait 100 ms)
  }
  Serial.println(AnalogMicroSignal);
}

void ledOn(bool currentMode) {
  if (currentMode) {
    for (byte i = 0; i < 4; i++) {
      digitalWrite(ledPins[i], HIGH);        // Увімкнення всіх світлодіодів (Turn on all LEDs)
    }
  } else {
    for (byte i = 0; i < 4; i++) {
      digitalWrite(ledPins[i], LOW);         // Вимкнення всіх світлодіодів (Turn off all LEDs)
    }
  }
}