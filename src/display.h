#ifndef DISPLAY_H
#define DISPLAY_H

#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW
#define MAX_DEVICES 4
#define CS_PIN 10

extern MD_Parola display;

void setSleep();
void setWork();
void setIn();
void setOut();
void updateDisplay();

#endif
