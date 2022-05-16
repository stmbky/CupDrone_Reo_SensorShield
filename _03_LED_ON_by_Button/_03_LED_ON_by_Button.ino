const int RED = 13;      // 빨간색 LED
const int BUTTON = A2;    // 버튼 연결포트 A2

void setup() {
  pinMode(RED, OUTPUT);      // D13핀 설정:출력
  pinMode(BUTTON, INPUT);    // A2핀 설정:입력

  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(BUTTON);    // val에 버튼 값저장(HIGHor LOW)
  Serial.println(val);


  if (val == LOW) {
    digitalWrite(RED, HIGH);
  } else {
    digitalWrite(RED, LOW);
  }
}
