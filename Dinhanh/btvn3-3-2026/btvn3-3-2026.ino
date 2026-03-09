//btvn: Dieu khien led bat tat thong qua cong serial bang cach nhap lenh tu ban phim
#define GPIO2 2
void setup() {
// thiet lap serial  voi baudrate 115200
  Serial.begin(115200);
//delay serial on dinh
  delay(1000);
// thet lap GPIO2 che do OUTPUT
  pinMode(GPIO2,OUTPUT);
}

void loop() {
// neu co tin hieu tu cong serial if sẽ chạy
  if (Serial.available()) {
//do serial nhan tung ky tu nen dung Serial.readStringUntil('\n') doc den ky tu \n sẽ dung và trả chuoi
 String che_do=Serial.readStringUntil('\n');
 //off den
 if(che_do=="off"){ digitalWrite(GPIO2,HIGH);}
 //on den
 else if (che_do=="on"){digitalWrite(GPIO2,LOW);}
  }
 
}
