const int LED= 13;
const int VOL= A3;               // 볼륨저항 A3에 연결
const int minDuration=10;     // 신호 최소값 한계 설정
const int maxDuration=600;    // 신호 최소값 한계 설정

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  int val = analogRead(VOL);   // 볼륨저항 신호 읽기
  val = constrain(val, minDuration, maxDuration);      // 볼륨저항 신호최소, 최대 설정

  digitalWrite(LED, HIGH);
  delay(val);
  digitalWrite(LED, LOW);
  delay(val);
}

