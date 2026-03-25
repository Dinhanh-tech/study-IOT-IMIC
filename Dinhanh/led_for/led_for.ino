const int led_red =14;
const int led_yellow= 13;
const int led_green =12;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);

}

void loop() {
 
  for (int i=12; i<15; i++) {
  digitalWrite(i, HIGH);
  delay(100);
  digitalWrite(i, LOW);
  delay(100);
  }

}
