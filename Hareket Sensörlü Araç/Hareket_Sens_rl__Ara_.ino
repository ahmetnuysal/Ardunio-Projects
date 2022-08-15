const int trigPin = 6; 
const int echoPin = 7;  

int DonmeHizi = 175; /* motorların dönme hızı kontrol edilir */

int DonmeZamani = 250; /*robotun 90 derece dönmesini sağlar */

const int sagileri = 9;
const int saggeri = 8;
const int solileri = 12;
const int solgeri = 13;
const int solenable = 11;
const int sagenable = 10;

long mesafeOlcumu(){
  long sure;
  long uzaklik;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  

  sure = pulseIn(echoPin, HIGH, 11600); 
  uzaklik= sure /29.1/2; 


  return uzaklik;
}

void ileri(int hiz){
  /* ilk değişkenimiz sag motorun ikincisi sol motorun hızını göstermektedir.
 
  analogWrite(sagenable, hiz); /* sağ motorun hız verisi */
  digitalWrite(sagileri,HIGH); /* ileri dönme sağlanıyor */
  digitalWrite(saggeri,LOW); /* ileri dönme sağlanıyor */

  analogWrite(solenable, hiz); /* sol motorun hız verisi */
  digitalWrite(solileri, HIGH); /* ileri dönme sağlanıyor */
  digitalWrite(solgeri,LOW); /* ileri dönme sağlanıyor */
}

void sagaDon(int hiz){
  analogWrite(sagenable, hiz); /* sağ motorun hız verisi */
  digitalWrite(sagileri,LOW); /* geri dönme sağlanıyor */
  digitalWrite(saggeri,HIGH); /* geri dönme sağlanıyor */

  analogWrite(solenable, hiz); /* sol motorun hız verisi */
  digitalWrite(solileri, HIGH); /* ileri dönme sağlanıyor */
  digitalWrite(solgeri,LOW); /* ileri dönme sağlanıyor */
}

void solaDon(int hiz){
  analogWrite(sagenable, hiz); /* sağ motorun hız verisi */
  digitalWrite(sagileri,HIGH); /* ileri dönme sağlanıyor */
  digitalWrite(saggeri,LOW); /* ileri dönme sağlanıyor */

  analogWrite(solenable, hiz); /* sol motorun hız verisi */
  digitalWrite(solileri, LOW); /* geri dönme sağlanıyor */
  digitalWrite(solgeri,HIGH); /* geri dönme sağlanıyor */
}

void geri(int hiz){
  analogWrite(sagenable, hiz); /* sağ motorun hız verisi */
  digitalWrite(sagileri,LOW); /* geri yönde dönme sağlanıyor */
  digitalWrite(saggeri, HIGH); /* geri yönde dönme sağlanıyor */

  analogWrite(solenable, hiz); /* sol motorun hız verisi */
  digitalWrite(solileri, LOW); /* geri yönde dönme sağlanıyor */
  digitalWrite(solgeri, HIGH); /* geri yönde dönme sağlanıyor */
}

void dur()
{
  /* Tüm motorlar kitlenerek durma sağlanıyor */
  digitalWrite(sagileri, HIGH);
  digitalWrite(saggeri, HIGH);
  digitalWrite(solileri, HIGH);
  digitalWrite(solgeri, HIGH);
}

void setup(){
  /* Uzaklık sensörünün pinleri ayarlanıyor */
  pinMode(trigPin, OUTPUT); /* trig pini cikis olarak ayarlandi */
  pinMode(echoPin,INPUT); /* echo pini giris olarak ayarlandi */

  /* motorları kontrol eden pinler çıkış olarak ayarlanıyor */
  pinMode(sagileri,OUTPUT);
  pinMode(saggeri,OUTPUT);
  pinMode(solileri,OUTPUT);
  pinMode(solgeri,OUTPUT);
  pinMode(sagenable,OUTPUT);
  pinMode(solenable,OUTPUT);
}

void loop(){
  
  while( mesafeOlcumu() > 10 ){ // önüne engel gelene kadar düz git
    ileri(DonmeHizi);
  }
  dur();
  delay(500);
  solaDon(DonmeHizi);
  delay(DonmeZamani);
  dur();
  delay(500);
 
}
