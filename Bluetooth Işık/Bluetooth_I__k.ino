#include <SoftwareSerial.h>
SoftwareSerial bluetoothModulu(10, 11); 
const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
void setup() {
  bluetoothModulu.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  }
char okunanKarakter;

void loop() {
while(bluetoothModulu.available()>0){ 
    okunanKarakter = bluetoothModulu.read(); 
    switch(okunanKarakter){ 
      case 'a':
        digitalWrite(LED1, HIGH);
        bluetoothModulu.println("LED 1 yakildi");
        break;
      case 'b':
        digitalWrite(LED1, LOW);
        bluetoothModulu.println("LED 1 sonduruldu");
        break;  
      case 'c':
        digitalWrite(LED2, HIGH);
        bluetoothModulu.println("LED 2 yakildi");
        break;
      case 'd':
        digitalWrite(LED2, LOW);
        bluetoothModulu.println("LED 2 sonduruldu");
        break;  
      case 'e':
        digitalWrite(LED3, HIGH);
        bluetoothModulu.println("LED 3 yakildi");
        break;
      case 'f':
        digitalWrite(LED3, LOW);
        bluetoothModulu.println("LED 3 sonduruldu");
        break;  
    } 
  }
}
