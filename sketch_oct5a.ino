
# include <OneWire.h>
# include <DallasTemperature.h>


#define DHT_PIN 0
#define RELAY_PIN 13

OneWire 
oneWire(DHT_PIN);

DallasTemperature
sensors(&oneWire);






void setup() {
  // seput your setup code here, to run once:
sensors.begin();
pinMode(RELAY_PIN,OUTPUT);

}

void loop(void) {
  // put your main code here, to run repeatedly:
sensors.requestTemperatures();

float tempC = sensors.getTempCByIndex(0);

if (tempC >27.0)

{

digitalWrite(DHT_PIN,HIGH);

}
else {

digitalWrite(DHT_PIN,LOW);
}
delay(1000);

}
