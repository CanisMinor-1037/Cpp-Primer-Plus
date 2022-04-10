#include<iostream>
using namespace std;
int main(){
    cout << "Enter your age: ";
    int age;
    cin >> age;
    int month = age*12;
    cout << age << " ages" << " = " << month << " months" << endl;
    return 0;
}