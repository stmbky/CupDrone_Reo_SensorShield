const int MIC = 0;
const int LED = 12;
int state = 0;
int val = 0;
int old_val = 0;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  val = analogRead(MIC);
  if (( val > 300 ) && (old_val <= 300 ))       // 박수소리300기준
  {                                             //입력받은소리 신호가 300이상이고 
    state = 1 - state;                          //전에 받은 소리 신호가 300 이하일 때, 
    delay(10);                                  //state 상태변화
  }

  old_val = val;
  if (state == 1)                   //state가1과같을 때,LED 켜짐
  {
    digitalWrite(LED, HIGH);
  }

  else
  {
    digitalWrite(LED, LOW);        // 그렇지않을 경우,LED 꺼짐
  }
}
