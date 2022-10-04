const int buttonPin = 2;     
const int ledPin =  13;     
const int ledPin2 =  12;

int buttonState = 0;         

void setup() {
 
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
 
  pinMode(buttonPin, INPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {

    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);

  } else {
  
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(250);
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(250);

  }
}
