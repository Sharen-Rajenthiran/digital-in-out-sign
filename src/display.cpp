#include "display.h"

MD_Parola display = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setSleep() {
  display.displayText("Sleep", PA_CENTER, PA_PRINT, 200, 0);
}

void setWork() {
  display.displayText("Working", PA_CENTER, PA_PRINT, 200, 0);
}

void setIn() {
  display.displayText("In", PA_CENTER, PA_PRINT, 200, 0);
}

void setOut() {
  display.displayText("Out", PA_CENTER, PA_PRINT, 200, 0);
}

void updateDisplay() {
  extern int currentState;
  switch (currentState) {
    case 1:
      setSleep();
      break;
    case 2:
      setWork();
      break;
    case 3:
      display.displayClear();
      setIn();
      break;
    case 4:
      setOut();
      break;
  }
}
