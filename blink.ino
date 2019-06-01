/*
 * https://circuits4you.com
 * ESP32 LED Blink Example
 * Board ESP23 DEVKIT V1
 * 
 * ON Board LED GPIO 2
 */
 
#define LED 2
 
void setup() {
  // Set pin mode
  pinMode(LED,OUTPUT);
}
 
void loop() {
  int i;
  for(i=0; i<400; i++){
    if(i<200){
      delay(1);
      digitalWrite(LED, HIGH);
      delay(3);
      digitalWrite(LED, LOW);
    }else{
      delay(1);
      digitalWrite(LED, LOW);
      delay(3);
      digitalWrite(LED, HIGH);
    }
  }
}
