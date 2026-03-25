const int led_red =14;
const int led_yellow= 13;
const int led_green =12;
void led(const int i, unsigned long time){
 digitalWrite(i, HIGH);
 delay(time);
 digitalWrite(i, LOW);
 delay(100);
}
void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);

}

void loop() {
 
  led(led_red,3000);
  led(led_yellow,1000);
  led(led_green,5000);
  

}
