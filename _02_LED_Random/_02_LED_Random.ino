const int RED = 10;         // 빨강LED는 D13에 연결
const int GREEN = 11;       // 초록LED는 D12에 연결
const int BLUE = 13;        // 파랑LED는 D11에 연결

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop()
{
  analogWrite(RED, random(0, 255));
  delay(1000);
  analogWrite(BLUE, random(0, 255));
  delay(1000);
  analogWrite(GREEN, random(0, 255));
  delay(1000);
}
