const int BOTON2 = 2;
const int BOTON1 = 3;
const int motorPin = 9; 
const int motorPin2 = 7;
int val = 0;
void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(BOTON1, INPUT);
  pinMode(BOTON2, INPUT);
}
void loop(){
 val= digitalRead(BOTON1) && digitalRead(BOTON2);
  if(val == HIGH){
  digitalWrite(motorPin, HIGH);
  digitalWrite(motorPin2, LOW);
    delay(950);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin, LOW);
    delay(950);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin, HIGH);
    delay(950);
  }
  else { 
    digitalWrite(motorPin, LOW);
  }
}
