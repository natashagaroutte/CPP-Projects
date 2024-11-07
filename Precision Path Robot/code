//  --------                 --------
// |  D9    |               |  D7    |
// | joint9 |               | joint7 |
//  ----- --------     --------- -----
//       |  D8    |   |  D6    |
//       | joint8 |   | joint6 |
//        --------     --------
//       |  D2    |  |   D4    |
//       | joint2 |  |  joint4 |
//  ----- --------    --------- -----
// |  D3    |               |  D5    |
// | joint3 |               | joint5 |
//  --------                 --------
//                Front
//set pin numbers
const int ledPin = 13;   //the number of the LED pin, has no significance to function
const int ldrPin = A0;  //the number of the LDR pin (Light Dependent Resistor)
int light = 0; // variable to maintain loop

#include <Servo.h> //this is including the library that includes the servo commands

// servo declaration (introducing the servos so they can be called later)
Servo joint2;  //front right hip
Servo joint3;  //right front leg
Servo joint4;  // left front hip
Servo joint5;  // front left leg
Servo joint6;  // left rear hip
Servo joint7;  // left rear leg
Servo joint8;  // right rear hip
Servo joint9;  // right rear leg

//home position (initial orientation)
int home_joint2 = 100; // 120 originally
int home_joint3 = 60; // 15 originally, 45
int home_joint4 = 60;
int home_joint5 = 165;
int home_joint6 = 130; // 100 originally,
int home_joint7 = 1; // 15 originally
int home_joint8 = 70;
int home_joint9 = 110; // 165 originally, 125

void setup(){
 Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  //initialize the LED pin as an output
  pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input

  joint2.attach(2); //correponds to wiring
  joint3.attach(3);
  joint4.attach(4);
  joint5.attach(5);
  joint6.attach(6);
  joint7.attach(7);
  joint8.attach(8);
  joint9.attach(9);

  joint2.write(home_joint2); //.write moves ervo motor to specific orientation designated earlier
  joint3.write(home_joint3);
  joint4.write(home_joint4);
  joint5.write(home_joint5);
  joint6.write(home_joint6);
  joint7.write(home_joint7);
  joint8.write(home_joint8);
  joint9.write(home_joint9);

  delay(3000);

}


void loop(){
 int ldrStatus = analogRead(ldrPin);   //read the status of the LDR value
Serial.println(ldrStatus); //lets us see the light levels being recieved
  //check if the LDR status is <= 700
  //if it is, set light to 1 which trigger loop of going forward
  if (ldrStatus >=700) {
 light = 1;}
 if ( light ==1){


  standhome();
  delay(1000);
  forward(1800);
 }
 
}

// idle time
void idle(){
  delay(50);
  }

// Home position
void standhome(){
  joint2.write(home_joint2);
  joint3.write(home_joint3);
  joint4.write(home_joint4);
  joint5.write(home_joint5);
  joint6.write(home_joint6);
  joint7.write(home_joint7);
  joint8.write(home_joint8);
  joint9.write(home_joint9);
}

// Forward (number of steps)
void forward(unsigned int step){
  if (step-- > 0){
  joint3.write(home_joint3+30); //originally 30,
  joint7.write(home_joint7+30); // originally 30,
  delay(100);
  joint2.write(home_joint2+15); //
  joint8.write(home_joint8+45); // orignally negative
  joint4.write(home_joint4);
  joint6.write(home_joint6);
  delay(100);
  joint3.write(home_joint3);
  joint7.write(home_joint7);
  idle();
 
  joint5.write(home_joint5-30);
  joint9.write(home_joint9-30);
  delay(25);
  joint2.write(home_joint2);
  joint8.write(home_joint8);
  joint4.write(home_joint4+45); /// was negative
  joint6.write(home_joint6+15); // was 30
  delay(100);
  joint5.write(home_joint5);
  joint9.write(home_joint9);
  idle();
  }}
