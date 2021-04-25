#include <Adafruit_NeoPixel.h>
#define PIN 6 // номер порта к которому подключен модуль
#define count_led 64// количество светодиодов 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(count_led, PIN, NEO_GRB + NEO_KHZ800); //first number change does distance between colors
void setup() {
    Serial.begin(9600);
    pixels.begin();
}

int Perevorot(int LED[8][8]) {
    int copy;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i % 2 != 0) {
                copy = LED[i][j];
                LED[i][8 - j - 1] = LED[i][j];
                LED[i][j] = copy;
            }
        }
    }
}

void show_led(int LED[8][8]) {
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 8; ++j) {
            if (LED[i][j] == 1) {
                pixels.setPixelColor((i * 8 + j), pixels.Color(255, 0, 0));
            }
            else {
                pixels.setPixelColor((i * 8 + j), pixels.Color(0, 0, 0));

            }
        }
    }
    pixels.show();
    delay(1000);
}


void loop() {


    int LED[8][8] = { {1, 1, 1, 1, 1, 1, 1, 1,},
                    {1, 0, 0, 0, 0, 0, 0, 1},
                    {0, 1, 0, 0, 0, 0, 1, 0},
                    {0, 0, 1, 0, 0, 1, 0, 0},
                    {0, 0, 0, 1, 1, 0, 0, 0},
                    {0, 0, 1, 0, 0, 1, 0, 0},
                    {0, 1, 0, 0, 0, 0, 1, 0},
                    {1, 1, 1, 1, 1, 1, 1, 1} };
    Perevorot(LED);
    show_led(LED);
    /* for (int i=0;i<count_led;i++)
     pixels.setPixelColor(i,pixels.Color(0,0,0));
   }
   pixels.show();
   delay(1000);
   for (int i=0;i<count_led;i++)
   {
     pixels.setPixelColor(i,pixels.Color(255,0,0));
   }
   pixels.show();
   delay(1000);*/
}