#include <Morse.h>
Morse morse(13);
void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()>0){
    a=Serial.read()
    swith(a)
    {
      case 'A': 
                morse.dot();
                morse.dash();
      case 'B':
                morse.dash(); 
                morse.dot();
                morse.dot();
                morse.dot();
      case 'C':
                morse.dash();
                morse.dot();
                morse.dash();
                morse.dot();
      case 'D':
                morse.dash();
                morse.dot();
                morse.dot();
      case 'E':
                morse.dot();
      case 'F':
                morse.dot();
                morse.dot();
                morse.dash();
                morse.dot();
      case 'G':
                morse.dash();
                morse.dash();
                morse.dot();
      case 'H':
                morse.dot();
                morse.dot();
                morse.dot();
                morse.dot();
      case 'I':
                morse.dot();
                morse.dot();
      case 'J':
                morse.dot();
                morse.dash();
                morse.dash();
                morse.dash();
      case 'K':
                morse.dash();
                morse.dot();
                morse.dash();
      case 'L':
                morse.dot();
                morse.dash();
                morse.dot();
                morse.dot();
      case 'M':
                morse.dash();
                morse.dash();
      case 'N':
                morse.dash();
                morse.dot();
      case 'O':
                morse.dash();
                morse.dash();
                morse.dash();
      case 'P':
                morse.dot();
                morse.dash();
                morse.dash();
                morse.dot();
      case 'Q':
                morse.dash();
                morse.dash();
                morse.dot();
                morse.dash();
      case 'R':
                morse.dot();
                morse.dash();
                morse.dot();
      case 'S':
                morse.dot();
                morse.dot();
                morse.dot();
      case 'T':
                morse.dash();
      case 'U':
                morse.dot();
                morse.dot();
                morse.dash();
      case 'V':
                morse.dot();
                morse.dot();
                morse.dot();
                morse.dash();
      case 'W':
                morse.dot();
                morse.dash();
                morse.dash();
      case 'X':
                morse.dash();
                morse.dot();
                morse.dot();
                morse.dash();
      case 'Y':
                morse.dash();
                morse.dot();
                morse.dash();
                morse.dash();
      case 'Z':
                morse.dash();
                morse.dash();
                morse.dot();
                morse.dot();
      case ' ': print("/");
      case '\n': break;        
     }
  }
}
