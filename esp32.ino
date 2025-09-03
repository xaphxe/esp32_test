#define LED1 13    // 첫 번째 LED 핀
#define LED2 0    // 두 번째 LED 핀

//설정
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);  // LED1 켬
  digitalWrite(LED2, LOW);   // LED2 끔
  delay(800);

  digitalWrite(LED1, LOW);   // LED1 끔
  digitalWrite(LED2, HIGH);  // LED2 켬
  delay(1000);
}
