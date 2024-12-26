#include <NanitLib.h>

int piezoPin = P4_2;  // пін для п'єзо(pin for piezo)
// Частоти нот C, C#, D, D#, E, F, F#, G, G#, A
int tones[10] = { 261, 277, 294, 311, 330, 349, 370, 392, 415, 440 };

void setup() {
    Nanit_Base_Start();//Ініціалізація пристрою Nanit (Initializing the Nanit device)
    pinMode(piezoPin, OUTPUT);//Встановлення піна piezoPin в режим виводу (Setting the piezoPin as an output pin)
}

void loop() {
    for (int i = 0; i < 10; i++) {
        // Відтворення ноти з заданою частотою (Playing a note with a specific frequency)
        tone(piezoPin,tones[i]);
        delay(500);//Затримка на 0.5 секунди (Delay for 0.5 seconds)
    }
    noTone(piezoPin);//Зупинка відтворення звуку (Stopping the sound playback)
    digitalWrite(piezoPin, 1);//Подання напруги на п'єзо(Applying voltage to the piezo)
    delay(2000);//Затримка на 2 секунди (Delay for 2 seconds)
}