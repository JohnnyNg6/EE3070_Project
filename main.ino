
//{WiFi_Module_Variable
  #include "WiFiEsp.h"
  #include "ThingSpeak.h" // always include thingspeak header file after other header files and custom macros
  #include "wifi_module.h"

  char ssid[] = "";   // your network SSID (name) 
  char pass[] = "";   // your network password
  int keyIndex = 0;            // your network key Index number (needed only for WEP)
  WiFiEspClient  client;

  // Emulate Serial1 on pins 6/7 if not present
  #ifndef HAVE_HWSERIAL1
  #include "SoftwareSerial.h"
  SoftwareSerial Serial1(19, 18); // RX, TX
  #define ESP_BAUDRATE  19200
  #else
  #define ESP_BAUDRATE  115200
  #endif

  // Weather station channel details
  unsigned long weatherStationChannelNumber = 12397;
  unsigned int temperatureFieldNumber = 4;

  // Counting channel details
  unsigned long counterChannelNumber = 298725;
  const char * myCounterReadAPIKey = "SODG0O2UZVGKWAWG";
  unsigned int counterFieldNumber = 1; 

  //Read_Function

  unsigned long myChannelNumber = ;
  const char * myWriteAPIKey = "";

  // Initialize our values
  int number1 = 0;
  int number2 = random(0,100);
  int number3 = random(0,100);
  int number4 = random(0,100);
  String myStatus = "";
//}



void setup() {

//{WiFi_Module_SetUp
  Serial.begin(115200);  
  while(!Serial){
    ; // wait for serial port to connect. Needed for Leonardo native USB port only
  }
  
  // initialize serial for ESP module  
  setEspBaudRate(ESP_BAUDRATE);

  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo native USB port only
  }

  Serial.print("Searching for ESP8266..."); 
  // initialize ESP module
  WiFi.init(&Serial1);

  // check for the presence of the shield
  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    // don't continue
    while (true);
  }
  Serial.println("found it!");
    
  ThingSpeak.begin(client);  // Initialize ThingSpeak
//}

}



void loop() {
  //WiFi_Read();
  WiFi_Write();
}
