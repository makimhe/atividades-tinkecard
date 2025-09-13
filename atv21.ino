void setup() {
  pinMode(7, INPUT); //configura os pinos de saída 
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
//se pressionar o botao por um tempo um led desliga e outro liga
void loop() {
  if (digitalRead(7)) {
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
  }
}
