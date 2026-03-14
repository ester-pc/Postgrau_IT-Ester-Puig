#include <CapacitiveSensor.h>
CapacitiveSensor sensor = CapacitiveSensor(4,2);


void setup() {
Serial.begin(115200);

}

void loop() {
long measurement = sensor.capacitiveSensor(30);

Serial.println(measurement);
delay(10);

}
