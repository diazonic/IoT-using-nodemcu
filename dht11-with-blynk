#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include "DHT.h"           // including the library of DHT11 temperature and humidity sensor
#define dht_dpin 14   //D5
#define DHTTYPE DHT11      // DHT 11
DHT dht(dht_dpin, DHTTYPE); 
BlynkTimer timer;
char auth[] = "auth-token";
char ssid[] = "ssid";
char pass[] = "pass";
float t;                                   // Declare the variables 
float h;
void sendUptime()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature(); 
  Serial.println("Humidity and temperature\n\n");
  Serial.print("Current humidity = ");
  Serial.print(h);
  Serial.print("%  ");
  Serial.print("temperature = ");
  Serial.print(t); 
  Blynk.virtualWrite(V0, t);
  Blynk.virtualWrite(V1, h);
}

void setup()
{
    Serial.begin(9600);// Debug console
    Blynk.begin(auth, ssid, pass);
    dht.begin();
    timer.setInterval(2000, sendUptime);
}

void loop()
{
  Blynk.run();
  timer.run();
}
