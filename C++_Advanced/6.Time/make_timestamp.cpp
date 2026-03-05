#include<iostream>
#include<ctime>
using namespace std;

int main(){
    tm datetime;         // Can use struct tm datetime;
    time_t timestamp;

    // Target --> WD Nov 5 12:34:23 2026
    datetime.tm_year = 2026 - 1900;  //Year starts from 1900 so if 2026 is written it means 1900+2023
    datetime.tm_mon = 11 - 1;        //Months are (0 to 11)
    datetime.tm_mday = 9;            //Day is as it is
    datetime.tm_hour = 12;           //Hour is also as it is (0 to 23)
    datetime.tm_min = 34;            //Minute is also as it is (0 to 59)
    datetime.tm_sec = 23;            //Second is also as it is (0 to "60")

    // Wday and yday not regarded by compiler if you specify (yy, mm, dd)
    // datetime.tm_wday = 5 - 1;     //Week day is (0 to 6) and yday is 0 to 365
    
    datetime.tm_isdst  = -1;         //Daylight Saving Time Flag +ve for active, 0 for deactive and 
                                     // -ve for computer based

    timestamp = mktime(&datetime);
    cout << ctime(&timestamp) << '\n';

}