//method to control all(rgb)led brightness
boolean fg = true;
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

void wave(){
  if(fg){
    color[0] = 0;
    color[1] = 0;
    color[2] = 0;
    fg=false;
    
  }
  color[0]= color[0]+1;
  
  if(color[0] == 255){
    color[1]= color[1]+1;
  }
  if(color[1] == 255){
    color[2]= color[2]+1;
  }
}

