const int LED = 10;        // 파란색 LED
const int BUTTON = 2;
int val = 0;               // 버튼 초기 값
int old_val = 0;           // 이전 버튼 값
int brightness = 10;       // 초기 LED 밝기 값

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  analogWrite(LED, brightness);    // LED 작동 확인
}

void loop()
{
  val = digitalRead(BUTTON);

  if ((val == LOW) && (old_val == LOW))    // 버튼을 누르고 있는 동안에 if문 실행
  {
    brightness++;    //brightness 값 1 증가

    if(brightness > 255)    //brightness값 255가 넘어가면 0으로 초기화
    {
      brightness = 0;
    }
  }
  old_val = val;    // old_val에 현재 val값 저장
  analogWrite(LED, brightness);
  delay(20);    // LED 밝기 변화 시간 간격
}
