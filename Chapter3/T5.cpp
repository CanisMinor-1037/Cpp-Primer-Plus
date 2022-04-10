#include <iostream>
int main() {
    using namespace std;
    long long worldPopulation;
    long long USPopulation;
    cout << "Enter the world's population: ";
    cin >> worldPopulation;
    cout << "Enter the population of the US: ";
    cin >> USPopulation;
    double result = double(USPopulation)/worldPopulation*100;
    cout << "The population of the US is " << result << "\% of the world population." << endl;
    return 0;
}