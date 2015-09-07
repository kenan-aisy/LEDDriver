void redLvl(){
  if(results.value == 0xFF08F7){  //Value for red-color-part down
      colorDown(0);                 //
    }                               //
    if(results.value == 0xFF28D7){
      colorUp(0);
    }
}

void greenLvl(){
  if(results.value == 0xFF8877){ //Value for green-color-part down
      colorDown(1);
    }
    if(results.value == 0xFFA857){
      colorUp(1);
    }
}

void blueLvl(){
  if(results.value == 0xFF48B7){ //Value for green-color-part down
      colorDown(2);
    }
    if(results.value == 0xFF6897){
      colorUp(2);
    }
}

