#include <NanitLib.h>

byte AnalogMicro = P4_1;  // Аналоговий пін для мікрофона(Analog pin for micro)
byte ledPin = P4_3;       // Пін для світлодіода (Led pin)

bool mode = 0;  // Режим світлодіода (Led mode)

const int LEVEL = 300;

void setup() {
  Nanit_Base_Start();           // Ініціалізація Nanit(Nanit initialization)
  Serial.begin(9600);           // Ініціалізація монітору порта(Serial monitor initialization)
  pinMode(AnalogMicro, INPUT);  // Пін як вхід (pin as input)

  pinMode(ledPin, OUTPUT);  // Світлодіод як вихід (led as output)
}

void loop() {
  int AnalogMicroSignal = analogRead(AnalogMicro);  // Читаємо аналоговий сигнал (Read analog signal)

  if (AnalogMicroSignal > LEVEL and mode == 0) { // Умова для зміни режима світлодіода (Condition for changing the LED mode)
    mode = 1; //Зміна режиму (Change mode)
    delay(100);  // затримка 100 мс (wait 100 ms)
  } else if (AnalogMicroSignal > LEVEL and mode == 1) { // Умова для зміни режима світлодіода (Condition for changing the LED mode)
    mode = 0; //Зміна режиму (Change mode)
    delay(100);  // затримка 100 мс (wait 100 ms)
  }
  digitalWrite(ledPin, mode); // Режим світлодіода як сигнал увімкнення або вимкнення світлодіода 
  
 
  Serial.println(AnalogMicroSignal);
  
}