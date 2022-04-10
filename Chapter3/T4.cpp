#include <iostream>
int main() {
    using namespace std;
    long long temp, total;
    const int HoursPerDay = 24;
    const int MinutesPerHour = 60;
    const int SecondsPerMinutes = 60;
    cout << "Enter the number of seconds: ";
    cin >> total;
    temp = total;
    int seconds = total % SecondsPerMinutes;
    total /= SecondsPerMinutes;
    int minutes = total % MinutesPerHour;
    total /= MinutesPerHour;
    int hours = total % HoursPerDay;
    int days = total / HoursPerDay;
    cout << temp << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
    return 0;  
}