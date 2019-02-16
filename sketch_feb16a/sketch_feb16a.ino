int ledrosso = 12;
int ledverde = 10;
int ledbianco = 8;
int ledgiallo = 6;
int drg = 0;
int dbv = 0;
int fermante = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledrosso,OUTPUT);
pinMode(ledverde,OUTPUT);
pinMode(ledbianco,OUTPUT);
pinMode(ledgiallo,OUTPUT);
Serial.begin(9600);
  Serial.println("inserisci dopo quanti cicli fermare");
while(Serial.available() == 0) {}
fermante = Serial.readString().toInt();
drg = random(1000,2000);
Serial.println(drg);
dbv = random(1000,2000);
Serial.println(dbv);
}
void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0;i < fermante;i++)
  {
    tutto();
  }
  setup();
}
void tutto()
{
  digitalWrite(ledrosso,HIGH);
  digitalWrite(ledgiallo, HIGH);
  delay(drg);
  digitalWrite(ledrosso,LOW);
  digitalWrite(ledgiallo, LOW);
  digitalWrite(ledbianco, HIGH);
  digitalWrite(ledverde, HIGH);
  delay(dbv);
  digitalWrite(ledbianco,LOW);
  digitalWrite(ledverde, LOW);
}
