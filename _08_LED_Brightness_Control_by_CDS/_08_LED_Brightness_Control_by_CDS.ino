const int CDS = A1;        // 조도센서 A1에 연결
const int LED = 13;
int val = 0;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  val = analogRead(CDS);                // 조도센서 값 읽기
  val = constrain(val, 700, 950);      // 센서 값 최소, 최대 값 설정
  val = map(val, 700, 950, 0, 255);    // 센서 값 범위 재설정
  analogWrite(LED, val);                // LED 밝기 조절
}
