//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// PIR Sensor
// 
// Made by Amit Gaikwad
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3713443-pir-sensor

const int ledPin = 13;
const int sensorPin = 7;
const int buzzerPin = 9;

void setup(){

  	Serial.begin(9600);
	pinMode(ledPin, OUTPUT);
  	pinMode(sensorPin, INPUT);
  	pinMode(buzzerPin, OUTPUT);
	
  	digitalWrite(ledPin, LOW);
    digitalWrite(sensorPin, LOW);
  	digitalWrite(buzzerPin, LOW);
}

void loop(){

  Serial.println(digitalRead(sensorPin));
  
  if(HIGH==digitalRead(sensorPin)){
  	digitalWrite(ledPin, HIGH);
    tone(buzzerPin,1000);
    Serial.println("Intrusion Detected...");
  
  }else if(LOW==digitalRead(sensorPin)){
  	digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

}
