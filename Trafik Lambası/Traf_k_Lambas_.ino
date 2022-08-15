const int kirmizi = 2,sari = 3,yesil = 4;

void setup()
{
  pinMode(kirmizi,OUTPUT);
  pinMode(sari,OUTPUT);
  pinMode(yesil,OUTPUT);
}

void kirmizi(){
  digitalWrite(kirmizi,HIGH);
  digitalWrite(sari,LOW);
  digitalWrite(yesil,LOW);
}

void sari(){
  digitalWrite(kirmizi,LOW);
  digitalWrite(sari,HIGH);
  digitalWrite(yesil,LOW);
}

void yesil(){
  digitalWrite(kirmizi,LOW);
  digitalWrite(sari,LOW);
  digitalWrite(yesil,HIGH);
}

void loop()
{
  kirmiziIsik();
  delay(6000);
 
  sariIsik();
  delay(1500);
 
  yesilIsik();
  delay(4000);
}
