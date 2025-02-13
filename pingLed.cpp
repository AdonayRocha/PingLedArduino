  // Linguagem "Wiring" --> C++ Adptado ao microcontrolador
 
  // Arduino UNO
  // Frequência de clock: 16 Mhz
  // 14  Pino de I/O [Input/Output]

  // Nível lógico baixo [Low 0], Nível lógico alto [True 1]
  // Nível Low = 0 Volts
  // Nível High = 5 Volts

//#define LED 8
int LED = 8;

void setup() {
  // Configura o pino LED como output
  pinMode(LED, OUTPUT);
  // Configuration code
  // Vai rodar uma vez
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
