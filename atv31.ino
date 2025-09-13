void setup() {
  // configura os pinos 9, 10 e 11 como saídas digitais
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // etapa 1: Liga o pino 9 (HIGH), desliga os pinos 10 e 11 (LOW)
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000); // espera 1 segundo (1000 milissegundos)

  // etapa 2: liga o pino 10, desliga os pinos 9 e 11
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(1000); // espera 1 segundo

  // etapa 3: liga o pino 11, desliga os pinos 9 e 10
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(1000); // espera 1 segundo

  // etapa 4: Desliga todos os pinos
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000); // espera 1 segundo
}
