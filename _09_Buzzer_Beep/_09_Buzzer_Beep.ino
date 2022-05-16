const int BUZZ = 8;      // 버저 D8에 연결

void setup()
{
}

void loop()
{
  tone(BUZZ, 1000, 300);       // 0.3 초간 1000 Hz로 울림
  delay(2000);                // 2초간 지연
}
