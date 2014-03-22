// Soil Moisture Sensor Hygrometer

// Based on code created by: aafent (http://electron-space.blogspot.de/2013/09/soil-moisture-sensor-soil-hygrometer.html)

// Interface Description (4-wire)
// VCC: 3.3v-5v
// GND: GND
// DO: Digital output interface (0 and 1) threshold taken from potentiometer
// AO: Analog output interface

const int moistureAO = 0;
const int moistureDO = 3;

int AO = 0;
int DO = 0;
int tmp = 0;

void setup (){
  Serial.begin(9600);
  Serial.println("Starting soil moisture sensor ...");
  pinMode(moistureAO, INPUT);
  pinMode(moistureDO, INPUT);
}

void loop ()
{
  // read digital input and send via serial
  AO = analogRead( moistureAO );
  Serial.print("A=");
  Serial.println(AO);
  
  // read digital input and send via serial
  DO=digitalRead( moistureDO );
  Serial.print("D=");
  Serial.println(DO);

  // send value every 30 seconds
  delay (30000);
}
