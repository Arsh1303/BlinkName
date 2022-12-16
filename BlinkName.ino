void dot(){
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
void dash(){
  digitalWrite(LED_BUILTIN,HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

int LED_BUILTIN = 4;

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}


void loop() 
{
  //A//
   Serial.println("A");
   dot();
   dash();
  
  //R//
  Serial.println("R");
  dot();
  dash();
  dot();
  
  //S//
  Serial.println("S");
  dot();
  dot();
  dot();
  
  //H//
  Serial.println("H");
  dot();
  dot();
  dot();
  dot();
  
  //P//
  Serial.println("P");
  dot();
  dash();
  dash();
  dot();
  
  //R//
  Serial.println("R");
  dot();
  dash();
  dot();
  
  //A//
  Serial.println("A");
  dot();
  dash();
  
  //T//
  Serial.println("T");
  dash();
  
  //A//
  Serial.println("A");
  dot();
  dash();
  
  //P//
  Serial.println("P");
  dot();
  dash();
  dash();
  dot();
  
  digitalWrite(LED_BUILTIN, LOW);
  delay(10000);
}
