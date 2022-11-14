/*
 
 All the resources for this project:
 https://randomnerdtutorials.com/
 
*/

int redPin = 11;     // Red RGB pin -> D11
int greenPin = 10;   // Green RGB pin -> D10
int bluePin = 9;    // Blue RGB pin -> D9
unsigned long time1;
enum state {early, mid, late, reset};
state nextState = early;


void setup() {

  Serial.begin(9600);

  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin, OUTPUT);

  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);

  time1 = millis(); 


  
}

void loop() {
  
  // RGB LED COMMON CATHODE

  if 
  if (millis() - time1 > 10000) {
    if ( nextState == early){

      analogWrite(redPin, 250);
      analogWrite(greenPin, 219);
      analogWrite(bluePin, 111);
      nextState = mid;
    

    } else if ( nextState == mid){
      
      analogWrite(redPin, 255);
      analogWrite(greenPin, 182);
      analogWrite(bluePin, 193);
      nextState = late;

    } else if (nextState == late) {

      analogWrite(redPin, 229);
      analogWrite(greenPin, 103);
      analogWrite(bluePin, 23);
      nextState = reset;

    } else if (nextState == reset) {
      analogWrite(redPin, 255);
      analogWrite(greenPin, 255);
      analogWrite(bluePin, 255);
      nextState = early;      
    }


    Serial.println("10 sec");
    time1 = millis();

  
  }
 
  
  delay(10);
}
