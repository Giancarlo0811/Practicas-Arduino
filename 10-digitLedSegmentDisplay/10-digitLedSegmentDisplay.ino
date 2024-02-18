// IO pin for each segment
int a = 7;
int b = 6;
int c = 5;
int d = 10;
int e = 11;
int f = 8;
int g = 9;
int dp = 4;

void digital_0(void) { // display number 0
  unsigned char j;
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}

void digital_1(void) { // display number 1
  unsigned char j;
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);

  for (j = 7; j <= 11; j++) {
    digitalWrite(j, LOW);
  }

  digitalWrite(dp, LOW);
}

void digital_2(void) { // display number 2
  unsigned char j;
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  for (j = 9; j <= 11; j++) {
    digitalWrite(j, HIGH);
  }
  digitalWrite(dp, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
}

void digital_3(void) { // display number 3
  digitalWrite(g,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(dp,LOW);
  digitalWrite(f,LOW);
  digitalWrite(e,LOW);
}

void digital_4(void) { // display number 4
  digitalWrite(c,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
  digitalWrite(a,LOW);
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
}

void digital_5(void) { // display number 5
  unsigned char j;
  digitalWrite(a,HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}

void digital_6(void) { // display number 6
  unsigned char j;
  for (j = 7; j <= 11; j++) {
    digitalWrite(j, HIGH);
  }
  digitalWrite(c, HIGH);
  digitalWrite(dp, LOW);
  digitalWrite(b, LOW);
}

void digital_7(void) { // display number 7
  unsigned char j;
  for (j = 5; j <= 7; j++) {
    digitalWrite(j, HIGH);
  }
  digitalWrite(dp,LOW);
  for (j = 8; j <= 11; j++) {
    digitalWrite(j, LOW);
  }
}

void digital_8(void) { // display number 8
  unsigned char j;
  for (j = 5; j <= 11; j++) {
    digitalWrite(j, HIGH);
  }
  digitalWrite(dp, LOW);
}

void digital_9(void) { // display number 9
  unsigned char j;
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}

void setup() {
  // put your setup code here, to run once:
  int i;

  for (i = 4; i <= 11; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  while(1) {
    digital_0();
    delay(1000);
    digital_1();
    delay(1000);
    digital_2();
    delay(1000); 
    digital_3();
    delay(1000); 
    digital_4();
    delay(1000); 
    digital_5();
    delay(1000); 
    digital_6();
    delay(1000); 
    digital_7();
    delay(1000); 
    digital_8();
    delay(1000); 
    digital_9();
    delay(1000);
  }
}
