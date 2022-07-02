#include <ESP8266WiFi.h>        
#include <WebSocketClient.h>

const char* ssid     = "Localhost";    
const char* password = "8976152032";    

void Connect_WIFI(){
 Serial.begin(115200);        
  delay(10);
  Serial.println('\n');
  
  WiFi.begin(ssid, password);            
  Serial.print("Connecting to ");
  Serial.print(ssid);
  Serial.println(" ...");

  int i = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(++i); Serial.print(' ');
  }

  Serial.println('\n');
  Serial.println("Connection established!");  
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP());  
  }
void Connect_Server_WS(){
  
  }
void setup() {
      Connect_WIFI();
}
void loop() { }