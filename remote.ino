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
    if(results.value == 0xFF08F7){
      colorDown(0);
    }
    if(results.value == 0xFF28D7){
      colorUp(0);
    }
    
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  
  }
}
