#include <Servo.h>

Servo ArmServo;  // create servo object to control a servo
Servo BaseServo;
Servo Arm2Servo;
Servo ClawServo;

//ArmServo
int IN1 = A0;  // analog pin used to connect the potentiometer
int val1;    // variable to read the value from the analog pin
int con1;
float value1 = 90; // I use a floating variable so I can set the increments the servo moves in smaller than whole numbers.

//BaseServo
int IN2 = A1; 
int val2;    
int con2;
float value2 = 90;

//Arm2Servo
int IN3 = A2; 
int val3;    
int con3;
float value3 = 20;

//ClawServo
int IN4 = A3; 
int val4;    
int con4;
float value4;

void setup() {
  Serial.begin(9600);
  BaseServo.attach(10);  // attaches the servo on digital pin 13 to the servo object
  ArmServo.attach(11);
  Arm2Servo.attach(12);
  ClawServo.attach(13);
}

void loop() {

  //ArmServo
  val1 = analogRead(IN1);            // reads the value of the potentiometer (value between 0 and 1023)
  if (val1 >= 550) { //these if-statements check if the potentiometer is moved in either direction, and if so, it adds or subtracts a value to a variable 
     value1 += 0.15; //this value relates to how many degrees are being added or subtracted to the float variable so the servo can move (decrease the value for less sensitivity, increase for more sensitivity)
  }
  else if (val1 <= 450) { //these if-statements check if the potentiometer is moved in either direction, and if so, it adds or subtracts a value to a variable
    value1 -= 0.15;  //this value relates to how many degrees are being added or subtracted to the float variable so the servo can move (decrease the value for less sensitivity, increase for more sensitivity)
  }
  con1 = constrain(value1, 0, 130); //constrains the numbers in the variable to a set range, useful in this case
  ArmServo.write(con1);     

 //BaseServo
 val2 = analogRead(IN2);            // reads the value of the potentiometer (value between 0 and 1023)
  if (val2 >= 550) { //these if-statements check if the potentiometer is moved in either direction, and if so, it adds or subtracts a value to a variable 
     value2 += 0.15; //this value relates to how many degrees are being added or subtracted to the float variable so the servo can move (decrease the value for less sensitivity, increase for more sensitivity)
  }
  else if (val2 <= 450) { //these if-statements check if the potentiometer is moved in either direction, and if so, it adds or subtracts a value to a variable
    value2 -= 0.15;  //this value relates to how many degrees are being added or subtracted to the float variable so the servo can move (decrease the value for less sensitivity, increase for more sensitivity)
  }
  con2 = constrain(value2, 0, 180); //constrains the numbers in the variable to a set range, useful in this case
  BaseServo.write(con2);              

 //Arm2Servo
 val3 = analogRead(IN3);            // reads the value of the potentiometer (value between 0 and 1023)
  if (val3 >= 550) { //these if-statements check if the potentiometer is moved in either direction, and if so, it adds or subtracts a value to a variable 
     value3 += 0.15; //this value relates to how many degrees are being added or subtracted to the float variable so the servo can move (decrease the value for less sensitivity, increase for more sensitivity)
  }
  else if (val3 <= 450) { //these if-statements check if the potentiometer is moved in either direction, and if so, it adds or subtracts a value to a variable
    value3 -= 0.15;  //this value relates to how many degrees are being added or subtracted to the float variable so the servo can move (decrease the value for less sensitivity, increase for more sensitivity)
  }
  con3 = constrain(value3, 0, 110); //constrains the numbers in the variable to a set range, useful in this case
  Arm2Servo.write(con3);    

 //ClawServo
 val4 = analogRead(IN4);            // reads the value of the potentiometer (value between 0 and 1023)
  if (val4 >= 550) { //these if-statements check if the potentiometer is moved in either direction, and if so, it adds or subtracts a value to a variable 
     value4 += 0.15; //this value relates to how many degrees are being added or subtracted to the float variable so the servo can move (decrease the value for less sensitivity, increase for more sensitivity)
  }
  else if (val4 <= 450) { //these if-statements check if the potentiometer is moved in either direction, and if so, it adds or subtracts a value to a variable
    value4 -= 0.15;  //this value relates to how many degrees are being added or subtracted to the float variable so the servo can move (decrease the value for less sensitivity, increase for more sensitivity)
  }
  con4 = constrain(value4, 0, 180); //constrains the numbers in the variable to a set range, useful in this case
  ClawServo.write(con4);   
              
}
