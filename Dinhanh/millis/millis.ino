const long duration=1000;
unsigned long start_time=0;
void setup() {
 Serial.begin(115200);
 delay(1000);
 Serial.println("start");
}

void loop() {
  // put your main code here, to run repeatedly:
unsigned long current_time=millis();
if(current_time-start_time>=duration){
  start_time=current_time;
  Serial.println("Excution time: ");
  Serial.print(current_time/1000);
  Serial.println("s");
}
}
