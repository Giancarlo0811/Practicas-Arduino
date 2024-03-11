#include <LiquidCrystal_I2C.h>

int potPin = 0;
int ledPin = 4;
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(potPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  lcd.setCursor(0, 0);
  lcd.print(String("Voltaje: ") + String(voltage) + String(" V"));
  if (voltage > 4.00) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
