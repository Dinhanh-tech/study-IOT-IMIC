#define GPIO2 2
void setup() {
// thet lap GPIO2 che do OUTPUT
  pinMode(GPIO2,OUTPUT);

}

void loop() {
  // thiet lap chan 2 co dong dien
digitalWrite(GPIO2,LOW);
//delay 1s
delay(1000);
//thet lap chan 2 khong co dong dien
digitalWrite(GPIO2,HIGH);
//delay 2s
delay(2000);
}
