void setup() {
// thiet lap serial  voi baudrate 115200
  Serial.begin(115200);
//delay serial on dinh
  delay(1000);

}

void loop() {
//in dong chu ra serial monitor
  Serial.println("Serial started");
  delay(4000);

}
