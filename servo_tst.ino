
#include <Servo.h> 

Servo myservo1, myservo2, myservo3; 


void setup() {
  
  // The servo 1 control wire is connected to Arduino D2 pin.
  myservo1.attach(2);

  // The servo 2 control wire is connected to Arduino D4 pin.
  myservo2.attach(4);

  // The servo 2 control wire is connected to Arduino D6 pin.
  myservo3.attach(6);
  
  // Servo1, Servo2 and Servo 3 are stationary.
  myservo1.write(90);
  myservo2.write(90);
  myservo3.write(90);

}

void loop() {
  // Delay the start for 10 seconds
  delay(10000);

  //Servos spins forward at full speed for 5 seconds and it will move in the direction of the two wheels rotating clockwise and anticlockwise.
  movement1();
  
  //Servos spins forward at full speed for 5 seconds and it will move in the direction of the two wheels rotating clockwise and anticlockwise.
  movement2();

  //Servos spins forward at full speed for 5 Seconds all wheels are moving clockwise, so the board will rotate from right to left. 
  movement3();
  
  //Servos spins forward at full speed for 5 seconds and it will move in the direction of the two wheels rotating clockwise and anticlockwise.
  movement4();

  //Servos spins forward at full speed for 5 Seconds all wheels are moving anticlockwise, so the board will rotate from left to right.
  movement5();
 
 

}
void movement1(){
  myservo1.write(0);
  myservo2.write(90);
  myservo3.write(180);
  delay(5000);
}

void movement2(){
  myservo1.write(180);
  myservo2.write(0);
  myservo3.write(90);
  delay(5000);
}

void movement3(){
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  delay(5000);
}

void movement4(){
  myservo1.write(90);
  myservo2.write(180);
  myservo3.write(0);
  delay(5000);
}

void movement5(){
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(180);
  delay(5000);
}
