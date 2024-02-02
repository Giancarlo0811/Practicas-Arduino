int ledPin = 10; // define digital pin 10.

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // define pin with LED connected as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH); // set the LED on
  delay(1000); // wait for a second
  digitalWrite(ledPin, LOW); // set the LED off
  delay(1000); 
}
