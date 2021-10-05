void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorEntradaA0 = analogRead(A0);
  float valorAnalogico = valorEntradaA0 * 0.004887;
  Serial.print("Valor Digital: ");
  Serial.print(valorEntradaA0);
  Serial.print(", Valor Analogico: ");
  Serial.println(valorAnalogico);
  //Serial.printIn(valorEntradaA0);
  delay(1);

}
