#define p1 8      //definindo que o pino 8 se chama p1
#define p2 9      //definindo que o pino 9 se chama p2
#define p3 10     //definindo que o oino 10 se chama p3
#define p4 11     //definindo que o pino 11 se chama p4
#define pbotao1 2  //definindo que o pino 2 se chama pbotao
#define pbotao2 1  //definindo que o pino 2 se chama pbotao

void setup() {
  pinMode(p1, OUTPUT);     //definindo p1 como OUTPUT
  pinMode(p2, OUTPUT);     //definindo p2 como OUTPUT
  pinMode(p3, OUTPUT);     //definindo p3 como OUTPUT
  pinMode(p4, OUTPUT);     //definindo p4 como OUTPUT
  pinMode(pbotao1, INPUT);  //define pbotao1 como INPUT
  pinMode(pbotao2, INPUT);  //define pbotao2 como INPUT
}

void loop() {
  bool i = digitalRead(pbotao1);  //le o pino pbotao1
  bool j = digitalRead(pbotao1);  //le o pino pbotao2
  if (i == 1) {                  //se pino botao é 1 entao
    digitalWrite(p1, 1);         //torna p1 como AUTO
   
  } else {                       //se nao
    digitalWrite(p1, 0);         //torna p1 como BAIXO
    
}
