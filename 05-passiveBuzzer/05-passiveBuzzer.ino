int buzzer = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned char i,j; // define variable
  while (1) {
    for (i = 0; i < 80; i++) { // output a frequency sound
      digitalWrite(buzzer, HIGH); // sound
      delay(1); // 1ms
      digitalWrite(buzzer, LOW);
      delay(1);
    }
    for (i = 0; i < 100; i++) { // output a frequency sound
      digitalWrite(buzzer, HIGH);
      delay(1);
      digitalWrite(buzzer, LOW);
      delay(2);
    }

    for (i = 0; i < 150; i++) { // output a frequency sound
      digitalWrite(buzzer, HIGH);
      delay(1);
      digitalWrite(buzzer, LOW);
      delay(1);
    }
  }
}
