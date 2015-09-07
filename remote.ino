void remote(){
  if (irrecv.decode(&results)) {
    if(results.value != repeat){
      last =  results.value;
    }
    if(results.value == repeat){
      results.value = last;
    }
    
    if(results.value == 0xFF02FD){
      if(power){
        power = false;
      }else{
        power =true;
      }
    }
    redLvl();
    greenLvl();
    blueLvl();
    
    
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
    delay(100);
  }
  if(results.value == 0xFFB04F){
      wave();
      
    }
}
