//nodemcu2
const int relayPin = D5; 

void setup() {
  Serial.begin(115200);
  pinMode(relayPin, OUTPUT);
}

void loop() {
   if (Serial.available() > 0) {
    char message = Serial.read();
    
    if (message == '1') {
      digitalWrite(relayPin, HIGH);
    }
    else if (message == '0') {
            digitalWrite(relayPin, LOW);
        }
  }
}