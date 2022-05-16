const int CDS = A1;        // 조도센서 A1에 연결
const int LED = 13;
float val = 0;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  val = analogRead(CDS);       // 조도센서 값 읽기
  val = constrain(val, 100, 950);     // 센서 값 최소, 최대 값 설정
  if (val > 700)              // LED작동 기준 값 700, 환경에 따라 다름
  {
    digitalWrite(LED, HIGH);   // 700 초과할 경우 LED 켜짐
    delay(10);
  }
  else
  {
    digitalWrite(LED, LOW);    // 1000 이하일 경우 LED 꺼짐
  }
}
