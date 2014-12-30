/* 
 * ON PUBLIC DOMAIN
 * Author         : Nitish Dash
 * Name           : HELLO WORLD Display on 16X2 LCD
 * Created        : 12/30/2014
 * Webpage        : http://goo.gl/NjOEsH
 * Author Email   : nitishdash95@gmail.com
 * Author Website : http://www.nitishdash.com/
 **** DONOT COPY AND PLAGIARATE WITHOUT THE AUTHOR'S PERMISSIONS ****
 */
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2); //column and rows 
  lcd.print("Hello, World!");
  lcd.setCursor(0, 1);
  lcd.print("Arduino Is Fun.");
void loop{}
