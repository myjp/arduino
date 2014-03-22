// blink

// led pin
int led = 13;

void setup() {                
  pinMode(led, OUTPUT);    
}

void loop() {
  // turn led on and wait
  digitalWrite(led, HIGH);   
  delay(1000);         
  
  // turn led off and wait
  digitalWrite(led, LOW);   
  delay(1000);
}
