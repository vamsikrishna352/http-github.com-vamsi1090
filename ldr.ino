int sensorValue = 0;
void setup()
{
 
 
  pinMode(9,OUTPUT);
   Serial.begin(9600);
  pinMode(A0,INPUT);
 
}
void loop()
{
  sensorValue=analogRead(A0);
  Serial.println(sensorValue);
 
 analogWrite(9,map(sensorValue,0,1023,0,255));
  
  delay(100);
}
