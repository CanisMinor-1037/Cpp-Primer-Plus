#include<iostream>
int main(){
    using namespace std;
    const int INsPerFT = 12;
    cout << "Enter IN: ";
    int IN;
    cin >> IN;
    int FT = IN / INsPerFT;
    IN = IN % INsPerFT;
    cout << "FT: " << FT << ", IN: " << IN << endl;
    return 0; 
}