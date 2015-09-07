#include <IRremote.h>
#define repeat 0xFFFFFFFF
byte color[3] ={ 255, 255, 255};


byte redLedPin = 5;
byte greenLedPin;
byte blueLedPin;

long last;
boolean power = false;


byte RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  pinMode(redLedPin, OUTPUT);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  
  controllLed();
  remote();
}




