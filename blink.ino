/*
 * https://circuits4you.com
 * ESP32 LED Blink Example
 * Board ESP23 DEVKIT V1
 * 
 * ON Board LED GPIO 2
 */
 
// #define LED 2
 
#define LED 21

int freq = 1000;
int ledChannel = 0;
int resolution = 8;

void setup() {
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(LED, ledChannel);
 
}
 
void loop() {
 
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    ledcWrite(ledChannel, dutyCycle);
    delay(7);
  }
 
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    ledcWrite(ledChannel, dutyCycle);
    delay(7);
  }
}
 
/*
void loop() {
  delay(3000);
  digitalWrite(LED, LOW);
  delay(3000);
  digitalWrite(LED, HIGH);
*/
/*
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
*/

