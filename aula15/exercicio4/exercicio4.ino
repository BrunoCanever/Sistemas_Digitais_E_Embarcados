#define pbotao1 2
#define pbotao2 3 
#define p1 8
#define p2 9
#define p3 10
#define p4 11

int cont = 0;
bool ultA = 0;
bool ultB = 0;
bool estA = 0;
bool estB = 0;
int i = 0;


void setup() {
  pinMode(pbotao1, INPUT);
  pinMode(pbotao2, INPUT);
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estA = digitalRead(pbotao1);
  if (estA != ultA){
    if (estA == 1){
      if (cont < 15){
        cont++;
        Serial.println(cont);
      }
    }
  }
  ultA = estA;

    estB = digitalRead(pbotao2);
  if (estB != ultB){
    if (estB == 1){
      if (cont > 0){
        cont--;
        Serial.println(cont);
      }
    }
  }
  ultB = estB;

  if (cont % 2 == 1 || cont == 1){
    digitalWrite(p1, 1);
  }
  else{
    digitalWrite(p1,0);
  }

  i =cont;

  if (i == 2||i == 3||i == 6||i == 7||i == 10||i == 11||i == 14||i == 15){
    digitalWrite(p2, 1);
  }
  else{
    digitalWrite(p2,0);
  }

  if ((cont / 4 >= 1 && cont / 4 < 2) || cont / 4 >=3 ){
    digitalWrite(p3, 1);
  }
  else{
    digitalWrite(p3,0);
  }

  if (cont>=8){
    digitalWrite(p4, 1);
  }
  else{
    digitalWrite(p4,0);
  }

}
