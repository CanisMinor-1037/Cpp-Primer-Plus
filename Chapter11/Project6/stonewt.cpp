// stonewt.cpp -- Stonewt methods
#include <iostream>
#include "stonewt.h"
using std::cout;

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs) {
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

// construct Stone object from stone, double values
Stonewt::Stonewt(int stn, double lbs) {
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {// default constructor, wt = 0
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {// destructor

}

// show weight in stones
void Stonewt::show_stn() const {
	cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const {
	cout << pounds << " pounds\n";
}