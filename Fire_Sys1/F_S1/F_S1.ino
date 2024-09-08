//nodemcu1
#include <ESP8266WiFi.h>
#include <EMailSender.h>

const char* ssid = "RedmiNote9";
const char* password = "11223344";

const char* emailServer = "smtp.gmail.com";
const int emailServerPort = 465;
const char* emailUsername = "robotechteam81@gmail.com";
const char* emailPassword = "bxwtjuwrakdxqrmp";
const char* recipientEmail = "samawaleed2372004@gmail.com";

EMailSender email(emailUsername,emailPassword,recipientEmail,emailServer,emailServerPort);
EMailSender::EMailMessage m;
EMailSender::Response r;
const int redLedPin = D3;
const int yellowLedPin = D2;
const int buzzerPin = D1;
const int flameSensorPin = D4;

int flag = 0;
void setup() {
  Serial.begin(115200);
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(flameSensorPin, INPUT);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    //delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
m.subject="Fire Warning";
m.message="Fire detected! call 911";
}

void loop() {
    int flameValue = digitalRead(flameSensorPin);
    //Serial.println(flameValue);
    if (flameValue == LOW) {
    digitalWrite(redLedPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    Serial.write('0');
    r = email.send(recipientEmail,m);
    Serial.println(r.desc);
  }
  
  else if (flameValue == HIGH ) {
    digitalWrite(redLedPin, LOW);
    digitalWrite(buzzerPin, LOW);
    Serial.write('1');
    digitalWrite(yellowLedPin, HIGH);
    //Serial.println("0");
  }
  delay(1000);
}