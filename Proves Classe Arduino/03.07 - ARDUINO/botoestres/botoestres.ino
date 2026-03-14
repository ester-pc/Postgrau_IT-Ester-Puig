const int pinBoton = A0;
int valorBoton;
int ledPin= 3;
int valMap;
#include <Capacitive.Sensor.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void setup() {
  // put your setup code here, to run once:
pinMode (pinBoton, INPUT);
pinMode (ledPin, OUTPUT);
Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly:
valorBoton = analogRead(pinBoton);
valMap= map(valorBoton, 0, 800, 0, 255);
valMap=constrain(valMap, 0, 255);
// aixo es per limitar de quan a quan va el teu valor que vulguis

analogWrite(ledPin, valMap);
Serial.println(valMap);


//Serial.println(valorBoton);
}
