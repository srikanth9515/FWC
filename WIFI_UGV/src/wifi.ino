#include <WiFi.h> 
#include<Arduino.h>
 void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(32, a); 
  digitalWrite(33, b); 
  digitalWrite(25, c); 
  digitalWrite(26, d); 
  digitalWrite(27, e); 
  digitalWrite(14, f);     
  digitalWrite(12, g); 
}
const char* ssid = "srikanth";         /*Enter Your SSID*/ 
const char* password = "srikanth123"; /*Enter Your Password*/ 
 
WiFiServer server(80); /* Instance of WiFiServer with port number 80 */ 
String request; 
#define  LED 21 
 
int LED_Status;  
 
WiFiClient client; 
 
void setup()  
{ 
  Serial.begin(115200); 
  pinMode(LED, OUTPUT); 
  digitalWrite(LED, LOW); 
  Serial.print("Connecting to: "); 
  Serial.println(ssid); 
  WiFi.mode(WIFI_STA); 
  WiFi.begin(ssid, password); 
  while(WiFi.status() != WL_CONNECTED) 
  { 
    Serial.print("."); 
    delay(100); 
  } 
  Serial.print("\n"); 
  Serial.print("Connected to Wi-Fi "); 
  Serial.println(WiFi.SSID()); 
  delay(1000); 
  server.begin(); /* Start the HTTP web Server */ 
  Serial.print("Connect to IP Address: "); 
  Serial.print("http://"); 
  Serial.println(WiFi.localIP()); 
   pinMode(32, OUTPUT);  
   pinMode(33, OUTPUT);
   pinMode(25, OUTPUT);
   pinMode(26, OUTPUT);
   pinMode(27, OUTPUT);
   pinMode(14, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(16, OUTPUT);
   pinMode(17, OUTPUT);
   pinMode(18, OUTPUT);
   pinMode(19, OUTPUT);

} 
 
void loop() 
{ 
  client = server.available(); 
  if(!client) 
  { 
    return; 
  } 
 
  while (client.connected()) 
  { 
    if (client.available()) 
    {  
      String req = client.readStringUntil('\r'); 
      client.flush(); 
      if(req.indexOf("/forward") != -1) 
      {
      Serial.println("Forward"); 
      sevenseg(0,0,1,0,0,1,0); //2
      digitalWrite(16,HIGH); 
      digitalWrite(17,LOW); 
      digitalWrite(18,HIGH); 
      digitalWrite(19,LOW); 
      } 
      else if(req.indexOf("/backward") != -1) 
      {Serial.println("Backward"); 
      sevenseg(0,0,0,0,1,1,0);  //3
      digitalWrite(16,LOW); 
      digitalWrite(17,HIGH); 
      digitalWrite(18,LOW); 
      digitalWrite(19,HIGH); 
      } 
      else if(req.indexOf("/left") != -1) 
      {Serial.println("Left"); 
      sevenseg(1,0,0,1,1,0,0);  //4
      digitalWrite(16,LOW); 
      digitalWrite(17,LOW); 
      digitalWrite(18,HIGH); 
      digitalWrite(19,LOW); 
      } 
      else if(req.indexOf("/right") != -1) 
      {Serial.println("Right"); 
      sevenseg(0,1,0,0,1,0,0);  //5
      digitalWrite(16,HIGH); 
      digitalWrite(17,LOW); 
      digitalWrite(18,LOW); 
      digitalWrite(19,LOW); 
      } 
      else if(req.indexOf("/stop") != -1) 
      {Serial.println("Stop"); 
      sevenseg(1,0,0,1,1,1,1); //1
      digitalWrite(16,HIGH); 
      digitalWrite(17,LOW); 
      digitalWrite(18,LOW); 
      digitalWrite(19,LOW); 
      } 
      else if(req.indexOf("/start") != -1) 
      {Serial.println("Start"); 
      sevenseg(0,0,0,0,0,0,1); //0
      digitalWrite(16,HIGH); 
      digitalWrite(17,LOW); 
      digitalWrite(18,LOW); 
      digitalWrite(19,LOW); 
      } 
      else if(req.indexOf("/cross") != -1) 
      {Serial.println("Cross"); 
      sevenseg(0,1,0,0,0,0,0);  //6
      digitalWrite(16,HIGH); 
      digitalWrite(17,LOW); 
      digitalWrite(18,LOW); 
      digitalWrite(19,LOW); 
      } 
      else if(req.indexOf("/circle") != -1) 
      {Serial.println("Circle"); 
      sevenseg(0,0,0,1,1,1,1);   //7
      digitalWrite(16,HIGH); 
      digitalWrite(17,LOW); 
      digitalWrite(18,LOW); 
      digitalWrite(19,LOW); 
      } 
      else if(req.indexOf("/square") != -1) 
      {Serial.println("Square"); 
      sevenseg(0,0,0,0,0,0,0); // 8
      digitalWrite(16,HIGH); 
      digitalWrite(17,LOW); 
      digitalWrite(18,LOW); 
      digitalWrite(19,LOW); 
      } 
      else if(req.indexOf("/triangle") != -1) 
      {Serial.println("Triangle"); 
      sevenseg(0,0,0,0,1,0,0);   //9
      digitalWrite(16,HIGH); 
      digitalWrite(17,LOW); 
      digitalWrite(18,LOW); 
      digitalWrite(19,LOW); 
      } 
  } 
  } 
}

