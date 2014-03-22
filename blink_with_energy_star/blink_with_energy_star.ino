// blink with energy star by http://www.openhomeautomation.net/arduino-battery/

#include <JeeLib.h> // Low power functions library

int led_pin = 13;
ISR(WDT_vect) { Sleepy::watchdogEvent(); } // Setup the watchdog
 
void setup() {
  pinMode(led_pin, OUTPUT);
}
 
void loop() {
 
// Turn the LED on and sleep for 1 second
digitalWrite(led_pin, HIGH);
Sleepy::loseSomeTime(1000);
 
// Turn the LED off and sleep for 1 second
digitalWrite(led_pin, LOW);
Sleepy::loseSomeTime(1000);
}
