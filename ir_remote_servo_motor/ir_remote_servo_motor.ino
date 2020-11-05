#include <IRremote.h>
#include <Servo.h>
int IRpin = 11;  // pin for the IR sensor
IRrecv irrecv(IRpin);
decode_results results;
Servo myservo;
void setup()
{
 Serial.begin(9600);
 irrecv.enableIRIn(); // Start the receiver
 myservo.attach(8);  // attaches the servo on pin 9 to the servo object
}
void loop() 
{
 if (irrecv.decode(&results)) 
   {
     irrecv.resume();   // Receive the next value
   }
  if (results.value == 16712445)  // change according to your IR remote button number
    {
      myservo.write(0);
      delay(15);
    }
    if (results.value == 16720605)  // change according  to your IR remote button number
    {
      myservo.write(0);
    delay(15);
    }
    
}     
