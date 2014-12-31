/* 
 * ON PUBLIC DOMAIN
 * Author         : Nitish Dash
 * Name           : Detect motion with HC-SR501 and Arduino
 * Created        : 12/31/2014
 * Webpage        : http://goo.gl/qNoi9f
 * Author Email   : nitishdash95@gmail.com
 * Author Website : http://www.nitishdash.com/
 **** DONOT COPY AND PLAGIARATE WITHOUT THE AUTHOR'S PERMISSIONS ****
 */

int ct = 10;    //calibration time
int pirPin = 9;    //PIR sensor's output
int ledPin = 10;

void setup(){
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(pirPin, LOW);
  
  Serial.println("Please wait, now calibrating the sensor....");
    for(int i = 0; i <= ct; i++){
      Serial.print(((i*100)/ct));
      Serial.print("% ");
      Serial.println("DONE.....");
      delay(1000);
      }
    Serial.println("Calibration Succesfully Done.");
    Serial.println("** SENSOR ACTIVE **");
    delay(50);
  }

void loop(){
     if(digitalRead(pirPin) == HIGH)
     {
       digitalWrite(ledPin, HIGH);
       Serial.println("------------------------");
       Serial.println("** MOTION DETECTED **");
       Serial.println("------------------------");
       Serial.println("");
       delay(1000);   
   }
   
     else
     {
       digitalWrite(ledPin, LOW);   
     }
   
}
