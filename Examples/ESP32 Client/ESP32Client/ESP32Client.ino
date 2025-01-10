#include <WiFi.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

const char* host = "www.example.com";
const char* request = "/";
const int port = 80;

void sendHttpRequest() {
  WiFiClient client;
  while(!client.connect(host, port)) {
    Serial.println("Connection fail");
    delay(1000);
  }
  client.print("GET " + String(request) + " HTTP/1.1\r\n" + 
              "Host: " + host + "\r\n" +
              "Connection: close\r\n\r\n");
  delay(500);

  while(client.available()) {
    String line = client.readStringUntil('\r');
    Serial.print(line);
  }
}

void wifiConnect() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" Connected");
}



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Connecting to WiFi");

  wifiConnect();

  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  sendHttpRequest();

}

void loop() {
 
  delay(1000); // this speeds up the simulation
}
