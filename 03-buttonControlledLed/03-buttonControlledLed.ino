int ledPin = 11;
int inPin = 7;
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inPin); // read the level value of pin 7 and assign if to val
  if (val == LOW) {
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }
}
