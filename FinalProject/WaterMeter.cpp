#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
float centimetros;
float tiempo;
float litros;
int trigger =6;
int echo =5;
int high;

void setup(){
Serial.begin(9600);
lcd.begin(16, 2); 
 pinMode(trigger, OUTPUT); 
 pinMode(echo, INPUT);
}
void loop(){
 digitalWrite(trigger,LOW); 
 delayMicroseconds(5);
 digitalWrite(trigger, HIGH); 
 delayMicroseconds(10); 
 tiempo=pulseIn(echo, HIGH); 
 centimetros= int(0.017*tiempo);
 
 high= 40-centimetros;
 litros= high/1.8;
  if(centimetros>=3 && centimetros<=40){
      
 
 Serial.print("liters filled: ");
 Serial.print(litros);
 Serial.print(" lt"); 
 Serial.println();
 lcd.setCursor(0,0);
 lcd.print("liters filled");
 lcd.setCursor(6,1);
 lcd.print(litros);
 delay(1000); 
 lcd.setCursor(0,1);
 lcd.print(" ");
  }
  else
    if (centimetros<3){
    Serial.print(" Full tank ");
    Serial.print(litros); 
    Serial.print(" lt"); 
    Serial.println();
    lcd.setCursor(0,0);
    lcd.print("Full tank");
    lcd.setCursor(6,1);
    lcd.print(litros);
    delay(1000);
    lcd.setCursor(0,1);
    lcd.print(" ");
    
  
  }
  
      
    
  
}
  