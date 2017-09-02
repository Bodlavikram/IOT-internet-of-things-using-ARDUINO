int led=5;


void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
//Serial.println("enter the value");

}

void loop()
{
  // put your main code here, to run repeatedly:
  for(int i=0;i<=10;i++)
  {
    digitalWrite(led,HIGH);
    Serial.println(i);
    delay(100);
    digitalWrite(led,LOW);
    delay(100);
    
  }
}
