#include <IRremote.h>
#define repeat 0xFFFFFFFF
byte color[3] ={ 255, 255, 255};

byte redLedPin = 6;
byte greenLedPin = 9;
byte blueLedPin = 5;

long last;
boolean power = false;


byte RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  Serial.print(color[2]);
  Serial.print(" ");
  Serial.print(color[1]);
  Serial.print(" ");
  Serial.print(color[0]);
  Serial.print("\n");
  controllLed();
  remote();
}




