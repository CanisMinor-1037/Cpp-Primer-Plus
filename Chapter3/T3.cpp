#include <iostream>
int main(){
    using namespace std;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    int degrees;
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    int minutes;
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    int seconds;
    cin >> seconds;
    double result;
    result = degrees + double(minutes)/60 + double(seconds)/3600;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << result << " degrees\n";
    return 0;
}