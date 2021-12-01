#include "lib.h"
bool lettera (char &a){
  bool lett;
  if (a>=65 and a<=90){
    lett=true;
    a=a+32;
  }else if (a>=97 and a<=122){
    lett=true;
    a=a-32;
  }else{
    lett=false;
  }
  return lett;
}  
