#include <Servo.h>

const int servo1 = 3;       // first servo
const int servo2 = 10;       // second servo

int servoRead1;
int servoRead2;

int servo1MinLimit = 30;
int servo1MaxLimit = 150;
int servo2MinLimit = 40;
int servo2MaxLimit = 120;

int randomServo1;
int randomServo2;

int move = 50;
int move2 = 50;
int savedRandom2;
int sweep;

Servo myservo1;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo

// Laser button Stuff 
const int laserButtonPin = 5;    // the number of the pushbutton pin
const int laserPin = 6;      // the number of the LED pin

// Variables will change:
int laserState = HIGH;         // the current state of the output pin
int laserButtonState;             // the current reading from the input pin
int laserLastButtonState = HIGH;   // the previous reading from the input pin
// the following variables are unsigned long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
unsigned long laserLastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long laserDebounceDelay = 50;    // the debounce time; increase if the output flickers

void setup() {

  // Servo  
  myservo1.attach(servo1);  // attaches the servo
  myservo2.attach(servo2);  // attaches the servo
  // Inizialize Serial
  randomSeed(analogRead(0));
  Serial.begin(9600);

// Laser stuff
  pinMode(laserButtonPin, INPUT);
  digitalWrite(laserButtonPin, HIGH); // initiate the internal pull up resistor
  pinMode(laserPin, OUTPUT);
  // set initial laser state
  digitalWrite(laserPin, laserState);
}


void loop(){

    while (true)
    { 
      randomServo1 = random(servo1MinLimit, servo1MaxLimit);

      move2++;
      myservo2.write(move2); // sets the servo position according to the scaled value    
      Serial.print("Saved random 2 - ");
      Serial.println(savedRandom2);
      Serial.print("move2 - ");
      Serial.println(move2);
      if (move2 == servo2MaxLimit)
      {
      randomServo2 = random(servo2MinLimit, servo2MaxLimit);
      move2 = randomServo2;
      savedRandom2 = randomServo2;
      Serial.println("over 100 ");
      }

// Bottom servo aka servo 1

      if (move == servo1MaxLimit)
      {
        sweep = 1;
      }

      if (move == servo1MinLimit)
      {
        sweep = 0;
      }

      if (sweep == 1)
      {
        move--;
        myservo1.write(move); // sets the servo position according to the scaled value    
      }

      if (sweep == 0)
      {
        move++;
        myservo1.write(move); // sets the servo position according to the scaled value    
      }

      delay(15); // waits for the servo to get there
    }

}
