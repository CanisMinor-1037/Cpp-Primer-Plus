//limits.cpp -- some integer limits
#include<iostream>
#include<climits>
int main(){
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    //sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl; 
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    cout << UINT64_MAX << endl;
    cout << CHAR_BIT << "\t" << CHAR_MAX << "\t" << CHAR_MIN << endl;
    cout << SCHAR_MAX << "\t" << SCHAR_MIN << "\t" << UCHAR_MAX << endl;
    cout << SHRT_MAX << "\t" << SHRT_MIN << "\t" << USHRT_MAX << endl;
    cout << INT_MAX << "\t" << INT_MIN << "\t" << UINT_MAX << endl;
    cout << LONG_MAX << "\t" << LONG_MIN << "\t" << ULONG_MAX << endl;
    cout << LLONG_MAX << "\t" << LLONG_MIN << "\t" << ULLONG_MAX << "\t";
    return 0;
}