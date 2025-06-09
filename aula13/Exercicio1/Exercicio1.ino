#define p1 8   //definindo que o pino 8 se chama p1
#define p2 9   //definindo que o pino 9 se chama p2
#define p3 10  //definindo que o oino 10 se chama p3
#define p4 11  //definindo que o pino 11 se chama p4

void setup() {
  Serial.begin(9600); //fala o tempo da iniciacao do arduino
  pinMode(p1, OUTPUT);  //definindo p1 como OUTPUT
  pinMode(p2, OUTPUT);  //definindo p2 como OUTPUT
  pinMode(p3, OUTPUT);  //definindo p3 como OUTPUT
  pinMode(p4, OUTPUT);  //definindo p4 como OUTPUT
}

void loop() {
  if (Serial.available() == 1 ){ //se eu tenho algo disponivel na serial
    char i = Serial.read(); //ler o valor da serial e armazena em i
    Serial.println(i); //mostra no Serial Monitor o que esta na serial
    
    if ( i == '1'){ //se i é igual a 1 entao
      digitalWrite(p1, 1); //torna p1 AUTO
    }
    if ( i == '2'){ //se i é igual a 2 entao
      digitalWrite(p2, 1); //torna p2 AUTO
    }
    if ( i == '3'){ //se i é igual a 3 entao
      digitalWrite(p3, 1); //torna p3 AUTO
    }
    if ( i == '4'){ //se i é igual a 4 entao
      digitalWrite(p4, 1); //torna p4 AUTO
    }
    if ( i == '5'){ //se i é igual a 5 entao
      digitalWrite(p1, 0); //torna p1 BAIXO
    }
    if ( i == '6'){ //se i é igual a 6 entao
      digitalWrite(p2, 0); //torna p2 BAIXO
    }
    if ( i == '7'){ //se i é igual a 7 entao
      digitalWrite(p3, 0); //torna p3 BAIXO
    }
    if ( i == '8'){  //se i é igual a 8 entao
      digitalWrite(p4, 0); //torna p4 BAIXO
    }
    if ( i == '9'){ //se i é igual a 9 entao
      digitalWrite(p1, 1); //torna p1 AUTO
      digitalWrite(p2, 1); //torna p2 AUTO
      digitalWrite(p3, 1); //torna p3 AUTO
      digitalWrite(p4, 1); //torna p4 AUTO
    }
    if ( i == '0'){ //se i é igual a 0 entao
      digitalWrite(p1, 0); //torna p1 BAIXO
      digitalWrite(p2, 0); //torna p2 BAIXO
      digitalWrite(p3, 0); //torna p3 BAIXO
      digitalWrite(p4, 0); //torna p4 BAIXO
    }
  }
}