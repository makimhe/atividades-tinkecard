int sensorPin = A0;   // pino do sensor no Arduino
float temperatura = 0;

void setup() {
  Serial.begin(9600);  // inicia comunicação serial
}

void loop() {
  int valorADC = analogRead(sensorPin);    // lê valor do pino A0 (0-1023)
  float tensao = (valorADC * 5.0) / 1023;  // converte para tensão (0-5V)

  // se for TMP36
  temperatura = (tensao - 0.5) * 100.0;

  // se for LM35, use: temperatura = tensao * 100.0;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  delay(1000); // lê a cada 1 segundo
}
