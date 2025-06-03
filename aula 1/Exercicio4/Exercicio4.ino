#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao1 2
#define pin_botao2 3

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
