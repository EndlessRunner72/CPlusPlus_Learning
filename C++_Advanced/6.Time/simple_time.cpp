#include<iostream>
#include<ctime>
using namespace std;

int main(){
    time_t timestamp;
    time(&timestamp);              // Get total seconds from 1 Jan 1970

    cout << ctime(&timestamp) << '\n';     // Converts it to human readable timestamp
}