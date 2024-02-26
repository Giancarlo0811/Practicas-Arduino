int adc = 0;
int buzzer = 12;
int soilValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  soilValue = analogRead(adc); // valor adc
  if (soilValue > 900) {
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    delay(500);

    Serial.println("Tengo sed");
  } else {
    digitalWrite(buzzer, LOW);
    Serial.println(soilValue);
  }
}
