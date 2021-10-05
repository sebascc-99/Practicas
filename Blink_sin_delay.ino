const int ledPin=LED_BUILTIN;

int ledState = LOW;
unsigned long previousMillis = 0;
const long int interval  = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval){
    previousMillis = currentMillis;
    if(ledState == LOW){
      ledState = HIGH;
    } else {
      ledState = LOW;
     } 
     digitalWrite(ledPin, ledState);
   
  Serial.println(ledState);
  Serial.println(LED_BUILTIN);
  Serial.println(interval);
  Serial.println("****");
  }
  /*myTime = millis();

  Serial.println(myTime/1000);
  delay(1000);*/
  }
