int a=0;
void setup() {
pinMode(13,OUTPUT);
Serial.begin(9600);
}
void loop() {
if(Serial.available())
 {
  a= Serial.read();}
  if (a=='H')
  {
   digitalWrite(13,HIGH);
  }
  if (a=='L')
  {
    digitalWrite(13,LOW);
  }
  if (a=='B')
  {
   while(1)
   {
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);
    if(Serial.available())
      {
        a= Serial.read();
      }
        if (a=='H')
          {
            digitalWrite(13,HIGH);
            break;
          }
        if (a=='L')
          {
            digitalWrite(13,LOW);
            break;
          }}}}
