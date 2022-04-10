#include<iostream>
using namespace std;
int main(){
    cout << "Please enter a Celsius value: ";
    double celsius;
    cin >> celsius;
    double fah = celsius * 1.8 + 32.0;
    cout << celsius << " degrees Celsius is " << fah << " degrees Fahrenheit" << endl;
    return 0;
}