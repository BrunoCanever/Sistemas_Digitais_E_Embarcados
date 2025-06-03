#define p1 8      //definindo que o pino 8 se chama p1
#define p2 9      //definindo que o pino 9 se chama p2
#define p3 10     //definindo que o oino 10 se chama p3
#define p4 11     //definindo que o pino 11 se chama p4
#define pbotao1 2  //definindo que o pino 2 se chama pbotao1
#define pbotao2 3  //defininfo que o pino 3 se chama pbotao2

int cont = 0;
bool aux = 0;

void setup() {
  pinMode(p1, OUTPUT);    //definindo p1 como OUTPUT
  pinMode(p2, OUTPUT);    //definindo p2 como OUTPUT
  pinMode(p3, OUTPUT);    //definindo p3 como OUTPUT
  pinMode(p4, OUTPUT);    //definindo p4 como OUTPUT
  pinMode(pbotao1, INPUT);   //define pbotao1 como INPUT
  pinMode(pbotao2, INPUT);   //define pbotao2 como INPUT
  Serial.begin(9600);
  
}

void loop() {
  bool botaoA = digitalRead(pbotao1);   //define que o botaoA é igual ao digitalRead do pbotao1
  bool botaoB = digitalRead(pbotao2);   //define que o botaoB é igual ao digitalRead do pbotao2

  
  if (botaoA == 1){
    if(aux == 0){
      cont ++;
      aux = 1; 
    }
  } else{
      aux=0;
    }

  Serial.println(cont);
}