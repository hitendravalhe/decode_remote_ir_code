#include <IRremote.h>
int IRpin = 11;  // pin for the IR sensor
int LED = 13;    // LED pin
IRrecv irrecv(IRpin);
decode_results results;
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();      // Start the receiver
}
void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    irrecv.resume();

    // below code helpfull for appication of decodede value
    //  if(results.value==  16742535 ) // Your ON button value
    //  {
    //             digitalWrite(13,LOW);
    //  }
    //  else if(results.value == 16732335 ) // Your OFF button value
    //  {
    //             digitalWrite(13,HIGH);
    //  }
    //  else if(results.value == 16746615 ) // Your OFF button value
    //  {
    //             digitalWrite(13,LOW);
    //  }
    //  else if(results.value ==  16734375) // Your OFF button value
    //  {
    //             digitalWrite(13,HIGH);
    //  }
    //  }
    //  else if(results.value == 16740495) // Your OFF button value
    //  {
    //             digitalWrite(13,LOW);
  }
}
