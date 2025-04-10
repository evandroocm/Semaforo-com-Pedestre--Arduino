// Semáforo A (Carros)
const int vermelhoCarroA = 13;
const int amareloCarroA = 12;
const int verdeCarroA = 11;

// Semáforo A (Pedestres)
const int verdePedestreA = 10;
const int vermelhoPedestreA = 9;

// Semáforo B (Carros)
const int vermelhoCarroB = 8;
const int amareloCarroB = 7;
const int verdeCarroB = 6;

// Semáforo B (Pedestres)
const int verdePedestreB = 5;
const int vermelhoPedestreB = 4;

void setup() {
  // Configuração dos pinos como saída
  pinMode(vermelhoCarroA, OUTPUT);
  pinMode(amareloCarroA, OUTPUT);
  pinMode(verdeCarroA, OUTPUT);
  pinMode(verdePedestreA, OUTPUT);
  pinMode(vermelhoPedestreA, OUTPUT);

  pinMode(vermelhoCarroB, OUTPUT);
  pinMode(amareloCarroB, OUTPUT);
  pinMode(verdeCarroB, OUTPUT);
  pinMode(verdePedestreB, OUTPUT);
  pinMode(vermelhoPedestreB, OUTPUT);
}

void loop() {
  // Sequência do semáforo
  leds(1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 4); // Via A liberada
  leds(1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 2); // Amarelo B
  leds(0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 4); // Via B liberada
  leds(0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 2); // Amarelo A
}

// Função que ativa os LEDs
void leds(bool rA, bool aA, bool vA, bool vpA, bool rpA, bool rB, bool aB, bool vB, bool vpB, bool rpB, int tempo) {
  digitalWrite(vermelhoCarroA, rA);
  digitalWrite(amareloCarroA, aA);
  digitalWrite(verdeCarroA, vA);
  digitalWrite(verdePedestreA, vpA);
  digitalWrite(vermelhoPedestreA, rpA);

  digitalWrite(vermelhoCarroB, rB);
  digitalWrite(amareloCarroB, aB);
  digitalWrite(verdeCarroB, vB);
  digitalWrite(verdePedestreB, vpB);
  digitalWrite(vermelhoPedestreB, rpB);

  delay(tempo * 1000);
}
