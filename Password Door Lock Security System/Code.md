```c++
#include<Keypad.h>  
#include <LiquidCrystal.h>
#include<Servo.h>
Servo servo;
#define yesil_led 5  
#define kirmizi_led 6   
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);
const byte satir = 4;  
const byte sutun = 4;  
char sifre[4] = {'1', '2', '3', '4'}; //default şifre
char sifre1[4];  
char tus;  
int i = 0;  
char tus_takimi[4][4] = {  
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte satir_pins[4] = {A0, A1, A2, A3};  
byte sutun_pins[4] = {A4, A5, 3, 2};    

Keypad tuss_takimi = Keypad(makeKeymap(tus_takimi), satir_pins, sutun_pins, 4, 4); 
row_pins,columb_pins



void setup() {
  
  servo.attach(13);
  pinMode(yled, OUTPUT);  
  pinMode(kled, OUTPUT);
  lcd.begin(16, 2); // LCD BEGAN
  lcd.clear();  //Clear screen


  lcd.clear();  
  lcd.setCursor(0, 0); 
  lcd.print("SIFREYI GIRINIZ:");    
  Serial.begin(9600);
  Serial.println("Hos geldiniz");  
  Serial.println("Sifreyi giriniz");  
}

void loop() {
  servo.write(0);
digitalWrite(kled,LOW);
digitalWrite(yled,LOW);
  tus = tuss_takimi.getKey();  

  if (tus)   
  {
    sifre1[i++] = tus;  

    lcd.setCursor(i, 1); 
    lcd.print("*");   
delay(100);
  }

  if (i == 4)
  { delay(200);
    char sifre[4] = {'1', '2', '3', '4'}; 
 
    if ((strncmp(sifre1, sifre, 4) == 0)) 
    {
      lcd.clear();
      lcd.setCursor(0, 0);
      servo.write(90);
      lcd.print("HOS GELDINIZ"); 
      digitalWrite(yled, HIGH);
      digitalWrite(kled, LOW);
      delay(100);
      delay(100);
      delay(100);
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0); 
      lcd.print("SIFREYI GIRINIZ");  
      i = 0;
    }

    else
    {
      lcd.clear();
      lcd.setCursor(0, 0); 
      lcd.print("SIFRE YANLIS!!!"); 
      digitalWrite(yled, LOW);
      digitalWrite(kled, HIGH);
      delay(1000);
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0); 
      lcd.print("SIFREYI GIRINIZ"); 
      i = 0;
    }
  }
}
```
