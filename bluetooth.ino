char data=0;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
void loop()
{
  if(Serial.available()>0)
  {
    data=Serail.read();
    Serial.println(data);
    if(data='1')
      digitalWrite(13,HIGH);
    else if(data='0')
      digitalWrite(13,LOW);
  }}