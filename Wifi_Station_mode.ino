#include <ESP8266WebServer.h>
#include <time.h>

const char* ssid = "I-GEOSCAN";
const char* password = "zzzzzzzz";

void Station_mode_init(){
  WiFi.begin(ssid, password);
  Serial.println("\nConnecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }
}

int time_return(int hour_min_sec){
  time_t now = time(nullptr);
//    Serial.println(ctime(&now));

    struct tm * timeinfo;
    timeinfo = localtime(&now);

    String a[3];
    a[0] = String(timeinfo->tm_sec, DEC);
    a[1] = String(timeinfo->tm_min, DEC);
    a[2] = String((timeinfo->tm_hour), DEC);
    if (timeinfo->tm_sec < 10)      a[0] = "0" + a[0];
    if (timeinfo->tm_min < 10)      a[1] = "0" + a[1];
    if (timeinfo->tm_hour < 10)     a[2] = "0" + a[2];
  
    switch(hour_min_sec){
      case 0:
        return a[0].toInt();
        break;
      case 1:
        return a[1].toInt();
        break;
      case 2:
        return a[2].toInt();
        break;
      default:
        return a[0].toInt();
        break;
    }
}



