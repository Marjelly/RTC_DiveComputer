//D=A4, C=A5
#include <DS3231.h>
DS3231  rtc(SDA, SCL);
char* time_T=0;
 

void setup() {
 Serial.begin(9600);
 rtc.begin();
}

void loop() {
  Serial.print(rtc.getDOWStr(FORMAT_SHORT));
  Serial.print(" ");
  Serial.print(rtc.getDateStr( ));
  Serial.print(" -- ");
  Serial.println(rtc.getTimeStr());
  time_T=rtc.getTimeStr();
 
  Serial.println(time_T);
  
  delay (1000);
}
  
