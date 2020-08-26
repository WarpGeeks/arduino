int ledpin = 13;

void setup() {
  // put your setup code here, to run once in the starting
  pinMode(ledpin, OUTPUT);
}

void loop() {
// put your main code here, that runs over and over again forever
  digitalWrite(ledpin, HIGH);   // turn the LED on (HIGH)
  delay(1000);                       // wait for a second
  digitalWrite(ledpin, LOW);    // turn the LED off (LOW)
  delay(1000);                       // wait for a second
}
