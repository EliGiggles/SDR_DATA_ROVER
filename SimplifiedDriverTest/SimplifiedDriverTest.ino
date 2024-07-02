void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(5, 123);
digitalWrite(6, LOW);
}
