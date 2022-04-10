// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"

int main() {
	Stonewt poppins(9, 2.8);// 9 stone, 2.8 pounds
	double p_wt = poppins;// implicit conversion
	cout << "Convert to double => ";
	cout << "Poppins: " << p_wt << " pounds.\n";
	cout << "Convert to int => ";
	cout << "Poppins: " << int (poppins) << " pounds.\n";
	return 0;
}
