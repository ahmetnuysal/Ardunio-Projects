#include  <LiquidCrystal.h> 
const int switchPin = 5; 
const int onOffSwitchStateSwitchPin = 4; 
const int pot = A0;
int switchState = 0;
int onOffSwitchState = 0;  // açma/kapama anahtarının mevcut durumu
int previousOnOffSwitchState = 0; // açma/kapama anahtarının önceki konumu
int potdeger;
int led1 = 0; 
int led2 = 1; 
LiquidCrystal lcd(8, 12, 11, 10, 7, 6);
int enA = 9;
int in1 = 3;
int in2 = 2;



void setup() {
  {
  for (int x = 0; x <2 ; x++) {
    pinMode(x, OUTPUT);
  }
  pinMode(switchPin, INPUT);
    pinMode(onOffSwitchStateSwitchPin, INPUT);
    pinMode(enA, OUTPUT);
    pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(pot, INPUT); 
lcd.begin(16, 2);
lcd.print("% ileri");
}
}
void loop() {

   delay(500);
  switchState = digitalRead(switchPin);
  onOffSwitchState = digitalRead(onOffSwitchStateSwitchPin);
  
  if (onOffSwitchState==HIGH) {
  if (switchState == HIGH) 
  {
  potdeger = analogRead(pot);
  potdeger = map(potdeger,0,1023,0,255); 
  if (potdeger<23){ 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    analogWrite(enA, 0);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
    lcd.home();
lcd.print("MOTOR OFF ");
  }
  if (potdeger>23){ 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    analogWrite(enA, 10);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
    lcd.home();
lcd.print("%10 ileri ");
  }
  if (potdeger>46){ 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    analogWrite(enA, 20);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
     lcd.home();
lcd.print("%20 ileri");
  }
  if (potdeger>69){ 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    analogWrite(enA, 30);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
    lcd.home();
lcd.print("%30 ileri");
  }
    if (potdeger>92){ 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    analogWrite(enA, 40);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
    lcd.home();
lcd.print("%40 ileri");
  }
     if (potdeger>115){ 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    analogWrite(enA, 50);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
   lcd.home();
lcd.print("%50 ileri");
  }
     if (potdeger>138){ 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
     analogWrite(enA, 60);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
     lcd.home();
lcd.print("%60 ileri");
  }
    if (potdeger>161){ 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    analogWrite(enA, 70);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
    lcd.home();
lcd.print("%70 ileri");
  }
    if (potdeger>184){ 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
     analogWrite(enA, 80);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
     lcd.home();
lcd.print("%80 ileri");
  }
    if (potdeger>207){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
     analogWrite(enA, 90);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
     lcd.home();
lcd.print("%90 ileri");
  }
  if (potdeger>230){ 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    analogWrite(enA, 100);
    digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW);
      lcd.home();
lcd.print("%100 ileri");
  }
  }
  {
   if (switchState == LOW) 
  {
  potdeger = analogRead(pot);
  potdeger = map(potdeger,0,1023,0,255); 
  if (potdeger<23){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    analogWrite(enA, 0);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH);   
 lcd.home();
lcd.print("MOTOR OFF ");
  }
  if (potdeger>23){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    analogWrite(enA, 10);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH); 
    lcd.home();
lcd.print("%10 geri ");
  }
  if (potdeger>46){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    analogWrite(enA, 2);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH); 
    
     lcd.home();
lcd.print("%20 geri");
  }
  if (potdeger>69){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    analogWrite(enA, 30);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH); 
    
    lcd.home();
lcd.print("%30 geri");
  }
    if (potdeger>92){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    analogWrite(enA, 40);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH); 
    lcd.home();
lcd.print("%40 geri");
  }
     if (potdeger>115){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    analogWrite(enA, 50);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH); 
   lcd.home();
lcd.print("%50 geri");
  }
     if (potdeger>138){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
     analogWrite(enA, 60);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH); 
     lcd.home();
lcd.print("%60 geri");
  }
    if (potdeger>161){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
     analogWrite(enA, 70);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH); 
    lcd.home();
lcd.print("%70 geri");
  }
    if (potdeger>184){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    analogWrite(enA, 80);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH); 
     lcd.home();
lcd.print("%80 geri");
  }
    if (potdeger>207){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    analogWrite(enA, 90);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH); 
     lcd.home();
lcd.print("%90 geri");
  }
  if (potdeger>230){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    analogWrite(enA, 100);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, HIGH); 
      lcd.home();
lcd.print("%100 geri");
  }
  }
  }
}
  else {
 if (potdeger>0){ 
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
     analogWrite(enA, 0);
    digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.
digitalWrite(in2, LOW); 
      lcd.home();
lcd.print("LCD   OFF");
    }
   }
  }
 
