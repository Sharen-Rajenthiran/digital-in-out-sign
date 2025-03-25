#include "display.h"

#define BUTTON_PIN 2

int currentState = 1;
const int totalStates = 4;

void setup() {
  display.begin();
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  updateDisplay();
}

void loop() {
  display.displayAnimate();

  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(200);
    currentState = (currentState % totalStates) + 1; 
    updateDisplay(); 

    while (digitalRead(BUTTON_PIN) == LOW);
  }
}
