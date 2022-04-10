#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

//#define ssid "esp8266"
//#define password "123456789"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
//  WiFi.begin(ssid, password);
//  Serial.print("Connecting");
//  while (WiFi.status() != WL_CONNECTED) {
//    delay(500);
//    Serial.print(".");
//  }
//  Serial.println();
//  Serial.print("Connected to IP Address: ");
//  Serial.println(WiFi.localIP());


    WiFi.softAP("esp");
}

void loop() {
  // put your main code here, to run repeatedly:

}
