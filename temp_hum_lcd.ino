/* 
 * ON PUBLIC DOMAIN
 * Author      : Nitish Dash
 * Name        : Temperature and Humidity display on 16X2 LCD with DHT11 Sensor
 * Created     : 12/26/2014
 * Webpage     : http://electro.nitishdash.com/2014/12/6-temperature-and-humidity-display-on.html 
 * Author Email: nitishdash95@gmail.com
 *
 **** DONOT COPY AND PLAGIARATE WITHOUT THE AUTHOR'S PERMISSIONS ****
 */
 
#include <LiquidCrystal.h>
#include <dht.h>
#define dht_dpin A0
dht DHT;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
//this section is for the symbol of degree
byte deg[8] = {
	0b01110,
	0b01010,
	0b01110,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};

void setup() { //initialise for at least 2s
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
  lcd.createChar(0, deg);
}
void loop()
{
 DHT.read11(dht_dpin); 
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print(" TEMP    : ");
 lcd.print((int)DHT.temperature);
 lcd.write((uint8_t)0);
 lcd.print("C");
 lcd.setCursor(0, 1);
 lcd.print(" HUMIDITY: ");
 lcd.print((int)DHT.humidity);
 lcd.print(" %");
 delay(1000); //modify but don't delay for less than 1s
}
