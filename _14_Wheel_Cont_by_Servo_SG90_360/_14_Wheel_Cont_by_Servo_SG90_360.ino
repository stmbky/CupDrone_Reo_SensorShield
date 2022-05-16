#include<Servo.h>    // servo.h include

Servo serv;       // 서보 객체 생성

void setup()
{
  serv.attach(7);    // 서보 객체 연결 핀 설정, D7에 연결
}

void loop()
{
  serv.writeMicroseconds(1500);        // 서보 정지
  delay(500);
  serv.writeMicroseconds(1300);        // 서보 시계 방향 최고속도
  delay(2000);
  serv.writeMicroseconds(1500);        // 서보 정지
  delay(500);
  serv.writeMicroseconds(1700);        // 서보 반시계 방향 최고속도
  delay(2000);
}
