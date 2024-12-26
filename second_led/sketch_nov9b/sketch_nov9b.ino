#include <NanitLib.h>   // включаємо бібліотеку(include library)

int red = P3_2;    // пін для червоного світлодіода(pin for the red LED)
int yellow = P3_3; // пін для жовтого світлодіода(pin for the yellow LED)
int green = P3_4;  // пін для зеленого світлодіода(pin for the green LED)
bool first = true;

void setup() {
  Nanit_Base_Start(); // ініціалізація Наніта(Nanit initialization)
  pinMode(red, OUTPUT);    // світлодіод на вихід(LED output)
  pinMode(yellow, OUTPUT); // світлодіод на вихід(LED output)
  pinMode(green, OUTPUT);  // світлодіод на вихід(LED output)
}


void loop() {
  if (first == true) {
    led_on (1, 1, 1);
    delay(500);
    led_on (0, 0, 0);
    delay(2000);
    first = false;
  }

  led_on (1, 0, 0); // вмикаємо червоний світлодіод(turn on the red LED)
  delay(1000); // чекаємо 1 сек(wait 1 sec)
  led_on (0, 1, 0); // вмикаємо жовтий світлодіод(turn on the yellow LED)
  delay(1000); // чекаємо 1 сек(wait 1 sec)
  led_on (0, 0, 1); // вмикаємо зелений світлодіод(turn on the green LED)
  delay(1000); // чекаємо 1 сек(wait 1 sec)
  
}


void led_on(bool r_l, bool y_l, bool g_l) {
  // Наша функція з параметрами сигналів світлодіодів(Our function with LED signal parameters)
  digitalWrite(red, r_l);
  digitalWrite(yellow, y_l);
  digitalWrite(green, g_l);
}