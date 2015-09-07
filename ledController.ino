//method to control all(rgb)led brightness
void controllLed() {
  if (power) {
    analogWrite(redLedPin, color[0]);
    analogWrite(greenLedPin, color[1]);
    analogWrite(blueLedPin, color[2]);
  }else {
    analogWrite(redLedPin, 0);
    analogWrite(greenLedPin, 0);
    analogWrite(blueLedPin, 0);
  }
}

void colorDown(byte i){
  if(color[i] == 0){
    return;
  }
     color[i] = color[i]-15;
}

void colorUp(byte i){
  if(color[i] == 255){
    return;
  }
     color[i] = color[i]+15;
}
