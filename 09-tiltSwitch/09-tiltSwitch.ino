void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;

  while (1) {
    i = analogRead(A5);
    if (i > 512)  { // if larger that 512（2.5V）
      digitalWrite(8, LOW);
    } else {
      digitalWrite(8, HIGH);
    }
  }
}
