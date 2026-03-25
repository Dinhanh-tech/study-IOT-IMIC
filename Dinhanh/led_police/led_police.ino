#define led_red 4
#define led_blue 5
void setup() {
  pinMode(led_red, OUTPUT);
   pinMode(led_blue, OUTPUT);

}

void loop() {
  digitalWrite(led_red, HIGH);
  delay(100);
  digitalWrite(led_red, LOW);
  delay(150);
  digitalWrite(led_blue, HIGH);
  delay(100);
  digitalWrite(led_blue, LOW);
  delay(150);
  

}
