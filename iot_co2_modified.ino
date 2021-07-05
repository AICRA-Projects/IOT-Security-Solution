#include "ThingSpeak.h"
#include <ESP8266WiFi.h>
int x = 0;
float vref = 3.3;
float resolution = vref/1023;
float CO2_PPM;
//----------- Enter you Wi-Fi Details---------//
char ssid[] = "sujoy";   // your network SSID (name)
char pass[] = "sumit@123";   // your network password
//-------------------------------------------//

//----------- Channel Details -------------//
unsigned long Channel_ID = 1395047; // Channel ID
const int Field_number = 1; // Don't change
const char * WriteAPIKey = "DVDVZAGHY8BEKBIH"; // Your write API Key
// ----------------------------------------//

WiFiClient  client;

void setup()
{
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  ThingSpeak.begin(client);
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
  x = ThingSpeak.writeField(Channel_ID, Field_number,CO2_PPM, WriteAPIKey);
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
float vout = analogRead(A0);
CO2_PPM =(vout*resolution);
 Serial.println("---------------------");
 Serial.print("Next Value:");
 Serial.println(CO2_PPM);
 delay(15000);
}
