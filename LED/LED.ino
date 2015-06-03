void setup() {
  // put your setup code here, to run once:
  pinMode(17, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  while (i < 17) {
    digitalWrite(17, HIGH);
    delay(1000);
    digitalWrite(17, LOW);
    delay(1000);
    i++;
  }
  delay(11000);
}

