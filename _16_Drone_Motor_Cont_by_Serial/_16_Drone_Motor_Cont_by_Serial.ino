const int Mot_1 = 5;       // motor 핀 설정
const int Mot_2 = 6;
const int Mot_3 = 9;
const int Mot_4 = 10;

int val=0;

void setup()
{
  Serial.begin(9600);
  
  while(! Serial);
  
  Serial.println("Speed from 0 to 255");
}

void loop()
{
  if (Serial.available() > 0)
  {
    val = Serial.parseInt();   // 시리얼 통신에서 숫자로 받기
    Serial.println(val);
  }

  if (val >= 0 && val <= 255)   // PWM 범위 0~255 구간 값만 사용
  {
  analogWrite(Mot_1, val);     // 시리얼 입력에 따른 모터 회전속도 변화
  analogWrite(Mot_2, val);
  analogWrite(Mot_3, val);
  analogWrite(Mot_4, val);
  }
}
