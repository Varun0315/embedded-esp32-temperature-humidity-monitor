#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SCREEN_WIDTH 128
#define SCREEN_HIEGHT 64

#define DHT11_SENSOR_PIN 4 
DHT dht(4, DHT11);

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HIEGHT, &Wire, -1);

void setup(){
  Serial.begin(115200);
  pinMode(DHT11_SENSOR_PIN, INPUT);

  dht.begin();

  if(!display.begin(
    SSD1306_SWITCHCAPVCC, 0x3c
  )) Serial.println("OLED connection failed");

  display.setTextSize(1);
  display.setTextColor(WHITE);

}

void loop(){
  float temp = dht.readTemperature(false);
  float humidity = dht.readHumidity();
  
  if (isnan(temp) || isnan(humidity))
{
    Serial.println("Failed to read DHT11");
}

  display.clearDisplay();
  display.setCursor(0,10); //for tempearture 

  Serial.print("Temp = ");
  Serial.print(temp);
  Serial.println(" C");

  Serial.print("humidity = ");
  Serial.print(humidity);
  Serial.println(" %");

  //displaying temperature readings on oled screen 
  display.print("Temperature: ");
  display.print(temp);
  display.println(" C");

  //displaying humidity readings on oled screen 
  display.setCursor(0,30); //for humidity
  display.print("Humidity: ");
  display.print(humidity);
  display.println(" %");


  display.display();
  
  delay(500);
}