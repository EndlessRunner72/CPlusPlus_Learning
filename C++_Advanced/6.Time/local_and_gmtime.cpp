#include<iostream>
#include<ctime>
using namespace std;

int main(){
    time_t timestamp;                         // It gives seconds from 1 Jan 1970
    time(&timestamp);                         // Get the current time (seconds) 

    tm ist_datetime = *localtime(&timestamp); // Fits the seconds to the structure "tm"
    tm gmt_datetime = *gmtime(&timestamp);

    cout << "IST Time: "<< ist_datetime.tm_hour << ':' << ist_datetime.tm_min << '\n';
    cout << "GMT Time: "<< gmt_datetime.tm_hour << ':' << gmt_datetime.tm_min << '\n';
}