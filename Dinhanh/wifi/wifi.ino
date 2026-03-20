//them thu vien wifi vao
#include <ESP8266WiFi.h>
void setup() {
//thiet lap serial voi baudrate 115200
 Serial.begin(115200);
//dat eps o che do station (esp8266 nhu 1 chiec dien thoai do wifi)
 WiFi.mode(WIFI_STA);
//ngat ket noi mang cu de quet cac wifi
 WiFi.disconnect();
//delay doi serial on dinh
 delay(1000);
Serial.println("start scan wifi.....");
}

void loop() {
//scan xem co bao nhieu mang wifi do duoc
int so_luong=WiFi.scanNetworks();
if(so_luong==0){Serial.println("Not found");}
else{
   Serial.println("Found");
   for(int i=0;i<so_luong;i++){
    Serial.println(i+1);
// in ten wifi
    Serial.println(WiFi.SSID(i));
    Serial.println("strenght: ");
//in toc do truyen wifi
    Serial.println(WiFi.RSSI(i));
    delay(100);
  }
}
delay(10000);
}
