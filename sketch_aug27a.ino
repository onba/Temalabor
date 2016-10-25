/*
Into Robotics
*/
 
#include <Servo.h>
 
int servoPin = 8;
int toogle1Pin = 9;
int toogle2Pin=10;
int sensorPin=0;
 
Servo servo;  
 
void setup()
{
  Serial.begin(9600);  
  servo.attach(servoPin);
  servo.write(0);
}
 
 
void loop()
{
  int buttonState=digitalRead(toogle1Pin);
  if (buttonState==LOW){
  int sensorValue=analogRead(sensorPin);
  int asd = map(sensorValue, 0, 1023, 179, 0);
  servo.write(asd); 
  }
  else{
    for (int i=-90;i<90;i+=1){
      servo.write(i);
      delay(10);
    }
  }
  //delay(100);
}
