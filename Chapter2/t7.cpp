#include<iostream>
using namespace std;
void printTime(int, int);
int main(){
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    printTime(hours, minutes);
    return 0;
}

void printTime(int hours, int minutes){
    cout << "Time: " << hours << ":" << minutes;
}