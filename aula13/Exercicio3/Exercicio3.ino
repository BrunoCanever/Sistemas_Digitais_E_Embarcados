#define p1 8      //definindo que o pino 8 se chama p1
#define p2 9      //definindo que o pino 9 se chama p2
#define p3 10     //definindo que o oino 10 se chama p3
#define p4 11     //definindo que o pino 11 se chama p4
#define pbotao1 2  //definindo que o pino 2 se chama pbotao1
#define pbotao2 3  //defininfo que o pino 3 se chama pbotao2

void setup() {
  pinMode(p1, OUTPUT);    //definindo p1 como OUTPUT
  pinMode(p2, OUTPUT);    //definindo p2 como OUTPUT
  pinMode(p3, OUTPUT);    //definindo p3 como OUTPUT
  pinMode(p4, OUTPUT);    //definindo p4 como OUTPUT
  pinMode(pbotao1, INPUT);   //define pbotao1 como INPUT
  pinMode(pbotao2, INPUT);   //define pbotao2 como INPUT
}

void loop() {
  bool botaoA = digitalRead(pbotao1);   //define que o botaoA é igual ao digitalRead do pbotao1
  bool botaoB = digitalRead(pbotao2);   //define que o botaoB é igual ao digitalRead do pbotao2
  if ((botaoA == 1) && (botaoB == 1)) {  //se botaoA e botaoB sao AUTO entao
    digitalWrite(p1, 1);  //p1 igual a AUTO
  } else{    //se nao
    digitalWrite(p1,0);   //p1 igual a BAIXO
  }
  if ((botaoA == 1) || (botaoB == 1)) {  //se botaoA ou botaoB sao AUTO entao
    digitalWrite(p2, 1);  //p2 igual a AUTO
  } else{    //se nao
    digitalWrite(p2,0);   //p2 igual a BAIXO
  }
  if ((botaoA == 1) ^ (botaoB == 1)) {  //se botaoA xor botaoB sao AUTO entao
    digitalWrite(p3, 1);  //p3 igual a AUTO
  } else{    //se nao
    digitalWrite(p3,0);   //p3 igual a BAIXO
  }
}