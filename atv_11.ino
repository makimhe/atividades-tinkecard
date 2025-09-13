void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // acende um por um (vai acumulando até todos acenderem)
  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(13, HIGH);
  delay(300);

  // apaga um por um (vai apagando até todos apagarem)
  digitalWrite(13, LOW);
  delay(300);
  digitalWrite(12, LOW);
  delay(300);
  digitalWrite(11, LOW);
  delay(300);
  digitalWrite(10, LOW);
  delay(300);
  digitalWrite(9, LOW);
  delay(300);
  digitalWrite(8, LOW);
  delay(300);
}