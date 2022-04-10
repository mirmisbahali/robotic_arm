#include <ESP8266WiFi.h>
#include <Firebase.h>
#include <FirebaseArduino.h>
#include <FirebaseCloudMessaging.h>
#include <FirebaseError.h>
#include <FirebaseHttpClient.h>
#include <FirebaseObject.h>




#define WIFI_SSID "esp8266"
#define WIFI_PASSWORD "123456789"

#define FIREBASE_HOST "task1-f05b0-default-rtdb.europe-west1.firebasedatabase.app"
#define FIREBASE_AUTH "r8NRhMYyALc0FpHaS85SUp7qKAufcBq8etcnXBWP"

int ledPin = D0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("Connected");
  Serial.println(WiFi.localIP());

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  String led = Firebase.getString("led");
  Serial.println(led);
  if (led == "ON") {
    Serial.println("LED is on");
  } else if (led == "OFF") {
    Serial.println("led is off");
  } else {
    Serial.println("Wrong Credentials");
  }

}
