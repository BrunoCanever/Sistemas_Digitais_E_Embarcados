#define p1 8      //definindo que o pino 8 se chama p1
#define p2 9      //definindo que o pino 9 se chama p2
#define p3 10     //definindo que o oino 10 se chama p3
#define p4 11     //definindo que o pino 11 se chama p4
#define pbotao 2  //definindo que o pino 2 se chama pbotao

void setup() {
  pinMode(p1, OUTPUT);     //definindo p1 como OUTPUT
  pinMode(p2, OUTPUT);     //definindo p2 como OUTPUT
  pinMode(p3, OUTPUT);     //definindo p3 como OUTPUT
  pinMode(p4, OUTPUT);     //definindo p4 como OUTPUT
  pinMode(pbotao, INPUT);  //define pbotao como INPUT
}

void loop() {
  bool i = digitalRead(pbotao);  //le o pino pbotao
  if (i == 1) {                  //se pino botao é 1 entao
    digitalWrite(p1, 1);         //torna p1 como AUTO
    digitalWrite(p2, 1);         //torna p2 como AUTO
    digitalWrite(p3, 0);         //torna p3 como BAIXO
    digitalWrite(p4, 0);         //torna p4 como BAIXO
  } else {                       //se nao
    digitalWrite(p1, 0);         //torna p1 como BAIXO
    digitalWrite(p2, 0);         //torna p2 como BAIXO
    digitalWrite(p3, 1);         //torna p3 como AUTO
    digitalWrite(p4, 1);         //torna p4 como AUTO
  }
}
