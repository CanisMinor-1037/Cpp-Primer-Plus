#include<iostream>
using namespace std;
double cal(double);
int main(){
    cout << "Enter the number of light years: ";
    double numberOfLightYears;
    cin >> numberOfLightYears;
    double astronomicalUnits = cal(numberOfLightYears);
    cout << numberOfLightYears << " light years = " << astronomicalUnits << " astronmical units." << endl;
    return 0;
}

double cal(double para){
    return 63240*para;
}