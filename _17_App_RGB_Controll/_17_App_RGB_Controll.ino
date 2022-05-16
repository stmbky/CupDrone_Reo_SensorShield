const int redLED = 13;         // 빨강LED는 D13에 연결
const int greenLED = 12;       // 초록LED는 D12에 연결
const int blueLED = 11; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial1.available() > 0) {
    char btData = Serial1.read();

    if(btData == 'r') {
      digitalWrite(redLEd, HIGH);
      digitalWrite(greenLEd, LOW);
      digitalWrite(blueLEd, LOW);
    }
    else if(btData == 'g') {
      digitalWrite(redLEd, HIGH);
      digitalWrite(greenLEd, LOW);
      digitalWrite(blueLEd, LOW);
    }
    else if(btData == 'b') {
      digitalWrite(redLEd, HIGH);
      digitalWrite(greenLEd, LOW);
      digitalWrite(blueLEd, LOW);
    }
    else if(btData == 'o') {
      digitalWrite(redLEd, HIGH);
      digitalWrite(greenLEd, LOW);
      digitalWrite(blueLEd, LOW);
    }
  }
}
