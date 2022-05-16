#include<Servo.h>    // servo.h include

Servo serv;       // 서보 객체 생성

void setup()
{
  serv.attach(7);    // 서보 객체 연결 핀 설정, D7에 연결
}

void loop()
{
  serv.write(0);        // 서보 각도 0도
  delay(500);
  serv.write(30);       // 서보 각도 30도
  delay(500);
  serv.write(60);       // 서보 각도 60도
  delay(500);
  serv.write(90);       // 서보 각도 90도
  delay(500);
  serv.write(120);      // 서보 각도 120도
  delay(500);
  serv.write(150);      // 서보 각도 150도
  delay(500);
  serv.write(180);      // 서보 각도 180도
  delay(500);
}
