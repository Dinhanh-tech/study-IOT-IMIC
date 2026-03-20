#include<EEPROM.h>
void setup() {
Serial.begin(115200);
EEPROM.begin(512);
delay(1000);
}
void put(String data){
EEPROM.put(0,data);
EEPROM.commit();
}
void get(){
 String read;
  EEPROM.get(0,read);
 Serial.println(read);
}
void clear(){
EEPROM.put(0,String(""));
EEPROM.commit();
}
void loop() {
  String data;
  char option;
  Serial.println("\n 1:write, 2:read, 3:clear ");
  while(!Serial.available());
  option=Serial.read();
  //do khi nhap chuoi  phai khu \n tranh khi nhap o get doc phai \n, VD:'1'+\r+\n 
  while(!Serial.available());
  Serial.read();
switch (option){
  case '1':
  Serial.println("put: ");
  while(!Serial.available());
  data=Serial.readStringUntil('\n');
   Serial.println("complete ");
  put(data);
  break;

  case '2':
  Serial.print("get: ");
  get();
  break;

  case '3':
  Serial.println("clear and get: ");
  clear();
  get();
  break;

  default:
  Serial.println("please! choose again(1:write, 2:read, 3:clear) ");
   
}
 delay(5000);
}
