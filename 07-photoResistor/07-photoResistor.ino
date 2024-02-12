int potPin = 0;
int ledPin = 11;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = map(analogRead(potPin), 0, 1023, 0, 255);
  Serial.println(val);
  analogWrite(ledPin, val);
  delay(10);
}
