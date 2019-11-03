int buttonState = 0;


void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
   pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(4,INPUT);
}
void loop()
{
  buttonState = digitalRead(4);
  if(buttonState == HIGH)
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    delay(500);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
     delay(500);
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
     delay(500);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
     delay(500);
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  else 
  {
     digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
}
 