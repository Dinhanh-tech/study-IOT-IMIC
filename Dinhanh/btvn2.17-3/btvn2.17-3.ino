const int led_red =14;
int value=0;
void setup() {
  Serial.begin(115200);
  delay(100);
  Serial.println("led started");
pinMode(led_red, OUTPUT);
 
}

void loop() {
 
if(Serial.available()){
  value=Serial.parseInt();
  //khu\n
  Serial.read();
  
  Serial.print(value);
  Serial.println("%");
  value=map(value,0,100,0,1023);
}
 analogWrite(led_red, value);
 delay(300);
 
}
