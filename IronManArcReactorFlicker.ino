/*
 * Flicker some LEDs with Attiny85 to be used as a background on
 * a costume prop, Iron Man Arc Reactor
 */
 
//Attiny PWM output pins
int ledPin1 = 0;
int ledPin2 = 1;

//Limits for the flicker 
int minBrightness = 50;
int maxBrightness = 200;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  analogWrite(ledPin1, random(minBrightness, maxBrightness));
  analogWrite(ledPin2, random(minBrightness, maxBrightness));
  delay(random(100));
}

void bootSequence(){
  //ramp up to full brightness 
  for (int i=0; i<=255; i+=5)
  {
    analogWrite(ledPin1, i);
    analogWrite(ledPin2, i);
    delay(10);
  }
}

