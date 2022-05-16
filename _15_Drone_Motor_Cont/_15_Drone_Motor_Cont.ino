const int Mot_1 = 5;       // motor 핀 설정
const int Mot_2 = 6;
const int Mot_3 = 9;
const int Mot_4 = 10;
int val = 0;

void setup()
{
  Serial.begin(9600);
  
  while(! Serial);
}

void loop()
{
  analogWrite(Mot_1, 50);     // 모터 1번만 회전
  analogWrite(Mot_2, 0);
  analogWrite(Mot_3, 0);
  analogWrite(Mot_4, 0);
  delay(1000);
  
  analogWrite(Mot_1, 0);     // 모터 2번만 회전
  analogWrite(Mot_2, 50);
  analogWrite(Mot_3, 0);
  analogWrite(Mot_4, 0);
  delay(1000);

  analogWrite(Mot_1, 0);     // 모터 3번만 회전
  analogWrite(Mot_2, 0);
  analogWrite(Mot_3, 50);
  analogWrite(Mot_4, 0);
  delay(1000);

  analogWrite(Mot_1, 0);     // 모터 4번만 회전
  analogWrite(Mot_2, 0);
  analogWrite(Mot_3, 0);
  analogWrite(Mot_4, 50);
  delay(1000);

}
