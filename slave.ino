// slave
// Devanshu Singla 

char t;

void setup()
{
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  Serial.begin(9600);

}

void loop()
{

  if (Serial.available())
  {
    t = Serial.read();
    Serial.println(t);
    Serial.println('k');
  }

  if (t == 'F') {          //move forward(all motors rotate in forward direction)
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);

    Serial.println('f');
  }

  else if (t == 'B') {    //move reverse (all motors rotate in reverse direction)
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);

       Serial.println('b');
  }

  else if (t == 'L') {
    Serial.println('l');
    digitalWrite(13, HIGH); //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  }

  else if (t == 'R') {    //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
    digitalWrite(11, HIGH);
    Serial.println('r');
  }

  else if (t == 'S') 
  {    //STOP (all motors stop)
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }

  delay(100);




}
