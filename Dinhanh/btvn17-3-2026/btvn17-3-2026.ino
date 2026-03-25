//btvn dk led bang serial

const int off=0;
const int led_red =14;
const int led_yellow= 13;
const int led_green =12;
const int led_blue =4;
int led_number[5]={off,led_red,led_yellow,led_green,led_blue};

void led(int i){
 digitalWrite(led_number[i], HIGH);
 
}
void setup() {
  Serial.begin(115200);
  delay(100);
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_blue, OUTPUT);
}

void loop() {
  if(Serial.available()){
    int control=Serial.parseInt();
    Serial.read();//khu\n
    if(control==0){
      for(int i=1;i<5;i++){
        digitalWrite(led_number[i], LOW);
      }
    }
    else{
     led(control);
    }
  }
 
  

}
