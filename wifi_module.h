#ifndef WIFI_MODULE_H
#define WIFI_MOUDLE_H
#include <Arduino.h>

#include "WiFiEsp.h"
#include "ThingSpeak.h"


extern char ssid[];
extern char pass[];
extern int keyIndex;

extern unsigned long weatherStationChannelNumber;
extern unsigned int temperatureFieldNumber;

// Counting channel details
extern unsigned long counterChannelNumber;
extern const char * myCounterReadAPIKey;
extern unsigned int counterFieldNumber; 




//Write_Function

extern unsigned long myChannelNumber;
extern const char * myWriteAPIKey;

// Initialize our values
extern int number1;
extern int number2;
extern int number3;
extern int number4;
extern String myStatus;


void WiFi_Read();
void WiFi_Write();
void setEspBaudRate(unsigned long baudrate);

#endif
