// Master 
// Devanshu Singla 
void setup() 
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  Serial.begin(9600);
}


void loop() 
{
   Serial.println("F");
   digitalWrite(13, HIGH);
   digitalWrite(11, HIGH);
   delay(3000);
   
   Serial.println("S");
   digitalWrite(13, LOW);
   digitalWrite(11, LOW);
   delay(500);
   
   Serial.println("B");
   digitalWrite(12, HIGH);
   digitalWrite(10, HIGH);
   delay(3000);

   Serial.println("S");
   digitalWrite(12, LOW);
   digitalWrite(10, LOW);
   delay(500);

   Serial.println("L");
   digitalWrite(13, HIGH);
   delay(3000);

   Serial.println("S");
   digitalWrite(13, LOW);
   delay(500);

   Serial.println("R");
   digitalWrite(11, HIGH);
   delay(3000);

   Serial.println("S");
   digitalWrite(11, LOW);
   delay(500);  
}
