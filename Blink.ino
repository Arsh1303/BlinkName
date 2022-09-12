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
  Serial.println("A");
  dot();
  dash();
  dot();
  
  //S//
  Serial.println("A");
  dot();
  dot();
  dot();
  
  //H//
  Serial.println("A");
  dot();
  dot();
  dot();
  dot();
  
  //P//
  Serial.println("A");
  dot();
  dash();
  dash();
  dot();
  
  //R//
  Serial.println("A");
  dot();
  dash();
  dot();
  
  //A//
  Serial.println("A");
  dot();
  dash();
  
  //T//
  Serial.println("A");
  dash();
  
  //A//
  Serial.println("A");
  dot();
  dash();
  
  //P//
  Serial.println("A");
  dot();
  dash();
  dash();
  dot();
  
  digitalWrite(LED_BUILTIN, LOW);
  delay(10000);
}
