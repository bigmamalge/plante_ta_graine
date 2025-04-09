#include "Grove_Temperature_And_Humidity_Sensor.h"
int sensorPin = A0;
int sensorPin2 = A2;
float cap1 = 0;
float cap2 = 0;
float Vcap1;
unsigned char inchar;


#define DHTTYPE DHT11
#define DHTPIN 2
DHT dht(DHTPIN, DHTTYPE);
float temp_hum_val[2] = {0};


void setup() {
    Serial.begin(9600);
    Wire.begin();
    dht.begin();
    

}
void loop() {
    // read the value from the sensor:
    cap1 = analogRead(sensorPin);
    cap2 = analogRead(sensorPin2);
    float temp_hum_val[2] = {0};

    Vcap1 = cap1* 5/1024;
    Serial_Data_Events();
    delay(1000);
    
   

}

void Serial_Data_Events()
{
  while (Serial.available())
  {
    Serial.flush();

    inchar = (unsigned char)Serial.read();

    unsigned char cartout = inchar;
    unsigned char car1et2 = inchar / 64;


    switch (inchar)
    {
      case 0b00000001 :

        Serial.println(Vcap1);
        delay(1000);
      break;
      
      case 0b00000010 :
        Serial.println(cap2);
        delay(1000);
      break;

      case 0b00000011 :
        if (!dht.readTempAndHumidity(temp_hum_val)) {
        Serial.println(temp_hum_val[1]);
       }
        delay(1000);
      break;

      case 0b00000100 :
        if (!dht.readTempAndHumidity(temp_hum_val)) {
        Serial.println(temp_hum_val[0]);
        }
        delay(1000);
      break;
    }
  }
}







