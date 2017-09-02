
String voice;

int led1 = 5;
int led2 =6 ;

String data;

void led1on()
{
  digitalWrite(led1,HIGH);
}

void led1of()
{
  digitalWrite(led1,LOW);
 
}

void led2on()
{
 
  digitalWrite(led2,HIGH);
  
}
void led2of()
{
  
  digitalWrite(led2,LOW);
}
void allon() {
  digitalWrite (led1, HIGH);
  digitalWrite (led2, HIGH);
  
}

void alloff() {
  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);

}

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
 
  
}

void loop() {
  while(Serial.available()) {
    delay(10);
    char c=Serial.read();
   if(c=='#')
    {break; }
    voice += c;
  }
  


if (voice.length() > 0) {
  Serial.println(voice);
  if (voice == "all on")
  {
    allon() ;
    }
  else if ((voice == "all off")||(voice == "all of"))
  {
    alloff() ; 
    }
    else if((voice=="led one on")||(voice=="LED 1 on")||(voice=="LED one on")||(voice=="LED 1 on"))
    {
      led1on();
    }
    else if((voice=="led one ofF")||(voice=="LED 1 ofF")||(voice=="LED 1 of"))
    {
      led1of();
    }

 else if(voice=="led to on")
    {
      led2on();
    }
    else if((voice=="led to off")||(voice=="led to of"))
    {
      led2of();
    }

voice="";
}
}



 
