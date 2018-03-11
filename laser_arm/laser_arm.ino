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

// ----------Laser button stuff----------
  int laserReading = digitalRead(laserButtonPin);

  // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH),  and you've waited
  // long enough since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (laserReading != laserLastButtonState) {
    // reset the debouncing timer
    laserLastDebounceTime = millis();
  }

  if ((millis() - laserLastDebounceTime) > laserDebounceDelay) {
    // WHATEVER THE READING IS AT, IT'S BEEN THERE FOR LONGER
    // than the debounce delay, so take it as the actual current state:

    // if the button state has changed:
    if (laserReading != laserButtonState) {
      laserButtonState = laserReading;

      // only toggle the LED if the new button state is HIGH
      if (laserButtonState == LOW) {
        laserState = !laserState;
//        Serial.println("laser button press");
      }
    }
  }

  // set the LED:
  digitalWrite(laserPin, laserState);

  // save the reading.  Next time through the loop,
  // it'll be the lastButtonState:
  laserLastButtonState = laserReading;
// --------- Laser button end ---------

//    int moveTo = 100;  
//      for(int i=0; i<=360; i++){
//    myservo2.write(i); // sets the servo position according to the scaled value    
//    for(int move=0; move>=moveTo; move++)
//    {

//    servoVal2 = map(analogRead(joyH), 0, 1023, 50, 180); // scale it to use it with the servo (result  between 0 and 180)
//      Serial.println(move);
//    while (move <= moveTo)
//    while (move <= randomServo2)
    while (true)
    { 
      randomServo1 = random(servo1MinLimit, servo1MaxLimit);

      move2++;
      myservo2.write(move2); // sets the servo position according to the scaled value    
      Serial.print("Saved random 2 - ");
      Serial.println(savedRandom2);
      Serial.print("move2 - ");
      Serial.println(move2);
//        if (move2 >= randomServo2)
//        {
//        move2--;
//      myservo2.write(move2); // sets the servo position according to the scaled value    
//      delay(100); // waits for the servo to get there
//        }
//
//        if (move2 <= randomServo2)
//        {
//        move2++;
//      myservo2.write(move2); // sets the servo position according to the scaled value    
//      delay(100); // waits for the servo to get there
//        }
      if (move2 == servo2MaxLimit)
      {
//        move2--;
//      move2 = 30;
      randomServo2 = random(servo2MinLimit, servo2MaxLimit);
      move2 = randomServo2;
      savedRandom2 = randomServo2;
      Serial.println("over 100 ");

      }
//      }
//    if (move2 == randomServo2)
//    if (move2 == savedRandom2)
//    {
//      randomServo2 = random(servo2MinLimit, servo2MaxLimit);
//      move2 = randomServo2;
//      Serial.println("meet move2");
//    }

// Bottom servo aka servo 1


//      move++;
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


//      move++;
//      myservo1.write(move); // sets the servo position according to the scaled value    
//      if (move == 120)
//      {
//      move = randomServo1;
//
//      }
//    if (move == randomServo1)
//    {
//      move = randomServo1;
//    }
//
//      Serial.print("random Servo 1 - ");
//      Serial.println(randomServo1);
//      Serial.print("move - ");
//      Serial.println(move);
      delay(15); // waits for the servo to get there
    }

}
