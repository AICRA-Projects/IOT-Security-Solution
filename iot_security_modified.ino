#include "ThingSpeak.h"
#include <ESP8266WiFi.h>
float value = 0;
int fire_value=0;
int x = 0;
int y = 0;
float vref = 3.3;
float resolution = vref/1023;
#define pin_sen_1 D1
//----------- Enter you Wi-Fi Details---------//
char ssid[] = "BasementHall";   // your network SSID (name)
char pass[] = "July2019@#";   // your network password
//-------------------------------------------//

//----------- Channel Details -------------//
unsigned long Channel_ID = 1395047; // Channel ID
const int Field_number = 2; // 
const int Field_numbers = 3; //  
const char * WriteAPIKey = "DVDVZAGHY8BEKBIH"; // Your write API Key
// ----------------------------------------//

WiFiClient  client;

void setup()
{
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  ThingSpeak.begin(client);
  pinMode(pin_sen_1,INPUT);
}

void loop()
{
  internet();
  get_value();
  upload();
}

void upload()
{
  internet();
  ThingSpeak.setField(2, fire_value);
  ThingSpeak.setField(3, value);
  x = ThingSpeak.writeFields(Channel_ID,WriteAPIKey);
  if (x == 200)Serial.println("Data Updated.");
  if (x != 200)
  {
    Serial.println("Data upload failed, retrying....");
    delay(15000);
    upload();
  }
}

void internet()
{
  if (WiFi.status() != WL_CONNECTED)
  {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    while (WiFi.status() != WL_CONNECTED)
    {
      WiFi.begin(ssid, pass);
      Serial.print(".");
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
}

void get_value()
{
 value = analogRead(A0);
 value = (value*resolution);
 value = value*100;
 fire_value = digitalRead(pin_sen_1);
 Serial.println("---------------------");
 Serial.print("Next Value:");
 Serial.println(value);
 Serial.println(fire_value);
 delay(5000);
}
