const int RED = 13;   
const int GREEN = 11;
const int BLUE = 10;

void setup()
{
  pinMode(RED, OUTPUT); 
  pinMode(GREEN, OUTPUT); 
  pinMode(BLUE, OUTPUT);   
}

void loop()
{
  digitalWrite(RED, HIGH);
  delay(500);
  digitalWrite(RED, LOW);
  delay(500);

  digitalWrite(GREEN, HIGH);
  delay(500);
  digitalWrite(GREEN, LOW);
  delay(500);

  digitalWrite(BLUE, HIGH);
  delay(500);
  digitalWrite(BLUE, LOW);
  delay(500);
}
