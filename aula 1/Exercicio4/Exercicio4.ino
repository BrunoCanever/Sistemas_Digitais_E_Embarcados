#define p1 8      //definindo que o pino 8 se chama p1
#define p2 9      //definindo que o pino 9 se chama p2
#define p3 10     //definindo que o oino 10 se chama p3
#define p4 11     //definindo que o pino 11 se chama p4
#define pbotao1 2  //definindo que o pino 2 se chama pbotao1
#define pbotao2 3  //defininfo que o pino 3 se chama pbotao2

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
}

void loop() {
  bool botaoA = digitalRead(pin_botao1);
  bool botaoB = digitalRead(pin_botao2);
  if ((botaoA == 1) && (botaoB == 1)) {
    digitalWrite(pin_led1, 1);
  } else{
    digitalWrite(pin_led1,0);
  }
  if ((botaoA == 1) || (botaoB == 1)) {
    digitalWrite(pin_led2, 1);
  } else{
    digitalWrite(pin_led2,0);
  }
  if ((botaoA == 1) ^ (botaoB == 1)) {
    digitalWrite(pin_led3, 1);
  } else{
    digitalWrite(pin_led3,0);
  }
}
