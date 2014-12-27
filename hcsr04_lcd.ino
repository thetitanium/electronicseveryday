/* 
 * ON PUBLIC DOMAIN
 * Author         : Nitish Dash
 * Name           : Measuring Distance with HC-SR04 Ultrasonic Module on 16X2 LCD 
 * Created        : 12/27/2014
 * Webpage        : http://goo.gl/qcpuCa
 * Author Email   : nitishdash95@gmail.com
 * Author Website : http://www.nitishdash.com/
 **** DONOT COPY AND PLAGIARATE WITHOUT THE AUTHOR'S PERMISSIONS ****
 */
 
#include <LiquidCrystal.h>
#define trig 10
#define echo 9
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() { //initialise for at least 2s
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  lcd.begin(16, 2);
  lcd.print("INITIALISING");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");  
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");  
  delay(500);
}
void loop()
{
  long time, dist;
  digitalWrite(trig, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trig, LOW);
  time = pulseIn(echo, HIGH);
  dist = ((time/2) / 29.1); //measure in cms
 if (dist >= 200 || dist <= 0)
 {
   lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("Distance: ");
   lcd.setCursor(0, 1);
   lcd.print("Out of range!");
 }
 else 
 {
   lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("Distance: ");
   lcd.setCursor(0, 1);
   lcd.print((int)dist);
   lcd.print(" cms");
  }
 delay(700); //modify but don't go below 500 ms
}
