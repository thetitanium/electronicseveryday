//Code developed by Nitish Dash. 
//More projects on www.eweekend.blogspot.com
//Initialising the pin numbers
const int a=7;
const int b=6;
const int c=4;
const int d=2;
const int e=3;
const int f=9;
const int g=10;

void setup()
{
pinMode(a, OUTPUT); 
pinMode(b, OUTPUT); 
pinMode(c, OUTPUT); 
pinMode(d, OUTPUT); 
pinMode(e, OUTPUT); 
pinMode(f, OUTPUT); 
pinMode(g, OUTPUT);
}

void loop()
{
    //Display 0
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(1000);
 
    //Display 1
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, HIGH); 
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(1000);
 
    //Display 2
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH); 
    digitalWrite(d, LOW); 
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
delay(1000);
        
    //Display 3
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    delay(1000);
 
    //Display 4    
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, HIGH); 
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(1000);
 
    //Display 5    
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(1000);
     
    //Display 6 
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(1000);
 
    //Display 7
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, HIGH); 
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(1000);
    
    //Display 8   
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(1000);
 
    //Display 9   
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(1000);
  }
