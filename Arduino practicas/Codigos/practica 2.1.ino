const int LED1 =3;
const int LED2=4;
const int LED3=5;
const int BOTON1 = 8;
const int BOTON2 = 9;
int val = 0;
void setup(){  
pinMode(LED3,OUTPUT);
pinMode(LED2,OUTPUT);  
pinMode(LED1,OUTPUT); 
pinMode(BOTON2,INPUT); 
pinMode(BOTON1,INPUT); 
}
void loop() {       
  val= digitalRead(BOTON1) && digitalRead(BOTON2);
  if(val == HIGH) {
    digitalWrite(LED1, HIGH);
    delay(500);
    digitalWrite(LED2, LOW);
    delay(500);
    digitalWrite(LED3, LOW);
    delay(500);
    digitalWrite(LED1, LOW);
    delay(500);
    digitalWrite(LED2, HIGH);
    delay(500);
    digitalWrite(LED3, LOW);
    delay(500);
    digitalWrite(LED1, LOW);
    delay(500);
    digitalWrite(LED2, LOW);
    delay(500);
    digitalWrite(LED3, HIGH);
    delay(500);
  }
}