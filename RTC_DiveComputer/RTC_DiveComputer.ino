 

#include <DS3231.h>
#define SDA 10
#define SCL 11 
DS3231  rtc(SDA, SCL);

 
Time  t;

char* date_T=0;
char* day_T=0;
int year_T=0;
int hour_T=0;
int minute_T=0;
int second_T=0;

int rtcIntervall=1000;
long rtcIntervallx;

void setup()
{
  
  Serial.begin(9600);
  rtc.begin();
  
  
}

void loop()
{ 
    
  get_Time();
   
  

}
void get_Time(){

  if(rtcIntervallx<millis()){
    rtcIntervallx=millis()+rtcIntervall;
    
     t = rtc.getTime();
  
  date_T= rtc.getDateStr();
  day_T= rtc.getDOWStr(FORMAT_SHORT);
  year_T=t.year, DEC ;
  hour_T=t.hour, DEC ;
  minute_T=t.min, DEC ;
  second_T=t.sec, DEC ;
  
  Serial.println(date_T);
  Serial.println(day_T);
  Serial.println(year_T); 
  Serial.println(hour_T);
  Serial.println(minute_T);
  Serial.println(second_T); 
   
  
  }
   
  }
