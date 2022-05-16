const int VOL = A3;
const int LED = 13;
int val = 0;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  val = analogRead(VOL);
  val = constrain(val, 10, 600);      // 최소, 최대 한계치 설정
  val = map(val, 10, 600, 0, 255);    // 숫자범위 재설정
  analogWrite(LED, val);
}
