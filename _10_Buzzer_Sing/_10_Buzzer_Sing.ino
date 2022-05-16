const int BUZZ = 8;
int note[] = {1047, 1175,  1319,  1397,  1568,  1760,  1976, 2093};
         //   도[0] 레[1]   미[2]  파[3]  솔[4],  라[5], 시[6] 도[7]
		 
void setup()
{
  tone(BUZZ, note[4], 500);    // 솔  "학"
  delay(1000);
  tone(BUZZ, note[4], 500);    // 솔  "교"
  delay(1000);
  tone(BUZZ, note[5], 500);    // 라  "종"
  delay(1000);
  tone(BUZZ, note[5], 500);    // 라  "이"
  delay(1000);
  tone(BUZZ, note[4], 500);    // 솔  "땡"
  delay(1000);
  tone(BUZZ, note[4], 500);    // 솔  "땡"
  delay(1000);
  tone(BUZZ, note[2], 500);    // 미  "땡"
}

void loop()
{
}
