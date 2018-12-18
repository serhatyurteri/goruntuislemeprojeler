#include <Stepper.h>
int in1Pin = 12;
int in2Pin = 11;
int in3Pin = 10;
int in4Pin = 9;
int step_mode = 8;                           

Stepper motor(512,in1Pin, in2Pin, in3Pin, in4Pin,step_mode);
void setup()
{
pinMode(in1Pin, OUTPUT);
pinMode(in2Pin, OUTPUT);
pinMode(in3Pin, OUTPUT);
pinMode(in4Pin, OUTPUT);

while (!Serial);
Serial.begin(9600);
motor.setSpeed(20);
}
void loop()
{
if (Serial.available()>0)
{
int inbyte =  Serial.read();
if (inbyte=='1')
{
  motor.step(15);


}
else if (inbyte=='2')
{
  motor.step(-15);
  
  
 }
 else if (inbyte=='3')
 {
  motor.step(0);
  }

}
}
