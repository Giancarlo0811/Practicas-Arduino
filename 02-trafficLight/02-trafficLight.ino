int redLed = 10;
int yellowLed = 7;
int greenLed = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenLed, HIGH);
  delay(3000);
  digitalWrite(greenLed, LOW);
  for(int i = 0; i < 3; i++) {
    delay(500);
    digitalWrite(greenLed, HIGH);
    delay(500);
    digitalWrite(greenLed, LOW);
  }
  digitalWrite(yellowLed, HIGH);
  delay(3000);
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, HIGH);
  delay(3000);
  digitalWrite(redLed, LOW);
}
