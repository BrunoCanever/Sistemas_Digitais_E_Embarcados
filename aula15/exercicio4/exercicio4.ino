#define pbotao1 2
#define pbotao2 3 
#define p1 8
#define p2 9
#define p3 10
#define p4 11

int contador = 0;
bool ultimoA = 0;
bool ultimoB = 0;
bool estadoA = 0;
bool estadoB = 0;
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
  estadoA = digitalRead(pbotao1);
  if (estadoA != ultimoA){
    if (estadoA == 1){
      if (contador < 15){
        contador++;
        Serial.println(contador);
      }
    }
  }
  ultimoA = estadoA;

    estadoB = digitalRead(pbotao2);
  if (estadoB != ultimoB){
    if (estadoB == 1){
      if (contador > 0){
        contador--;
        Serial.println(contador);
      }
    }
  }
  ultimoB = estadoB;

  if (contador % 2 == 1 || contador == 1){
    digitalWrite(p1, 1);
  }
  else{
    digitalWrite(p1,0);
  }

  i =contador ;

  if (i == 2||i == 3||i == 6||i == 7||i == 10||i == 11||i == 14||i == 15){
    digitalWrite(p2, 1);
  }
  else{
    digitalWrite(p2,0);
  }

  if ((contador / 4 >= 1 && contador / 4 < 2) || contador / 4 >=3 ){
    digitalWrite(p3, 1);
  }
  else{
    digitalWrite(p3,0);
  }

  if (contador>=8){
    digitalWrite(p4, 1);
  }
  else{
    digitalWrite(p4,0);
  }

}
