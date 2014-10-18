#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

Adafruit_PCD8544 display = Adafruit_PCD8544(7, 6, 5, 4, 3);

int KNOCK_PIN = 2;
int LED_PIN = 8;

int knockCount = 0;
boolean lcdStarted = false;

void setup() {
  Serial.begin(9600);
  
  display.begin();
  display.setContrast(50);
  display.clearDisplay();
  display.display();
  
  pinMode(KNOCK_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  while(1) {
    getInput();
  }
}

void getInput() {
  int knock = digitalRead(KNOCK_PIN);
  if (knockCount < 2) {
    display.clearDisplay();
    if (knock == LOW) {
      knockCount++;
      digitalWrite(LED_PIN, HIGH);
      delay(100);
      digitalWrite(LED_PIN, LOW);
    }
  } 
  if (knockCount == 2) {
    startLCD();
    delay(2000);
    digitalWrite(LED_PIN, LOW);
    knockCount = 0;
    display.clearDisplay();
    display.display();
  }
}

void loop() {
  //getInput();
}

void startLCD() {
    digitalWrite(LED_PIN, HIGH);
    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(BLACK);
    display.setCursor(0,0);
    display.println("Hello   world!");
    display.display();
}
