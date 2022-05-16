const int trig = 7;     // trig는 D7에 연결
const int echo = 4;     // echo는 D4에 연결
double dura = 0;
double dist = 0;

void setup() 
{
  Serial.begin (9600);
  pinMode(trig, OUTPUT);      // trig핀 출력
  pinMode(echo, INPUT);       // echo핀 입력
}

void loop() 
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);      // trig HIGH 10us
  delayMicroseconds(12);
  digitalWrite(trig, LOW);       // trig Low
  
  dura = pulseIn(echo, HIGH);     // 거리 계산
  
  dist = dura / 2 * 340 / 1000000 * 100;    // 소리 왕복시간 / 2 * 소리 속도 / 마이크로초 * cm 

  Serial.print("distance = ");
  Serial.print(dist);
  Serial.println("cm");
  delay(200);
}
