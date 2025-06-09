#define p1 8   //definindo que o pino 8 se chama p1
#define p2 9   //definindo que o pino 9 se chama p2
#define p3 10  //definindo que o oino 10 se chama p3
#define p4 11  //definindo que o pino 11 se chama p4

void setup() {
  pinMode(p1, OUTPUT);  //definindo p1 como OUTPUT
  pinMode(p2, OUTPUT);  //definindo p2 como OUTPUT
  pinMode(p3, OUTPUT);  //definindo p3 como OUTPUT
  pinMode(p4, OUTPUT);  //definindo p4 como OUTPUT
}

void loop() {
  digitalWrite(p1, 1);  //tornando o p1 AUTO
  digitalWrite(p2, 1);  //tornando o p2 AUTO
  digitalWrite(p3, 1);  //tornando o p3 AUTO
  digitalWrite(p4, 1);  //tornando o p4 AUTO
  delay(1000);          //dando um tempo entre os pinos no estado AUTO para o estado BAIXO
  digitalWrite(p1, 0);  //tornando o p1 BAIXO
  digitalWrite(p2, 0);  //tornando o p2 BAIXO
  digitalWrite(p3, 0);  //tornando o p3 BAIXO
  digitalWrite(p4, 0);  //tornando o p4 BAIXO
  delay(1000);          //dando um tempo antre os pinos no estado BAIXO para o estado AUTO
}