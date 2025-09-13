int ldrPin = A0;      // Entrada do LDR
int relePin = 7;      // Saída para o relé
int valorLdr = 0;     
int limite = 500;     // Ajustar depois

void setup() {
  pinMode(relePin, OUTPUT);
  digitalWrite(relePin, LOW); // Relé desligado no início
  Serial.begin(9600);
}

void loop() {
  valorLdr = analogRead(ldrPin);   // Lê valor do LDR

  Serial.print("Valor do LDR: ");  // Texto fixo
  Serial.println(valorLdr);        // Número lido

  if (valorLdr < limite) {         
    Serial.println(">> Escuro - Lâmpada ligada");
    digitalWrite(relePin, HIGH);   // Liga lâmpada
  } else {                         
    Serial.println(">> Claro - Lâmpada desligada");
    digitalWrite(relePin, LOW);    // Desliga lâmpada
  }

  delay(500); // pequena pausa
}
