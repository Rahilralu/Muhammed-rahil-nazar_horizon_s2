#include<Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;


int angle1,angle2,angle3,angle4,angle5,angle6;
void setup(){
  servo1.attach(4);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(7);
  servo5.attach(8);
  servo6.attach(9);
  
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  
  Serial.begin(1000);
  
  Serial.println("Enter the angle1,angle2,angle3,angle4,angle5,angle6");
}
  void loop(){
    if(Serial.available()>0){
    angle1=Serial.parseInt();
    angle2=Serial.parseInt();
    angle3=Serial.parseInt();
    angle4=Serial.parseInt();
    angle5=Serial.parseInt();
    angle6=Serial.parseInt();
  	
    servo1.write(angle1);
    servo2.write(angle2);
    servo3.write(angle3);
    servo4.write(angle4);
    servo5.write(angle5);
    servo6.write(angle6);
    delay(50);
    }}