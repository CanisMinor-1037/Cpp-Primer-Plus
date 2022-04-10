//bondini.cpp -- using escape sequences
#include <iostream>
int main(){
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    cout << "Let them eat g\u00E2teau" << endl;
    cout << "\u222B" << endl;
    return 0;
}