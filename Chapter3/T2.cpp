#include <iostream>
int main(){
    using namespace std;
    const int INsPerFT = 12;
    const double PoundsPerKilogram = 2.2;
    const double MetersPerIN = 0.0254;
    int IN, FT;
    cout << "Enter FT: ";
    cin >> FT;
    cout << "Enter IN: ";
    cin >> IN;
    IN = FT*INsPerFT + IN;
    double meters = MetersPerIN * IN;
    cout << "Enter pounds: ";
    double pounds;
    cin >> pounds;
    double kilograms = pounds/PoundsPerKilogram;
    double BMI = kilograms / meters / meters;
    cout << "BMI: " << BMI << endl;
    return 0;
}