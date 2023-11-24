#pragma once
#include "ani.h"
using namespace std;
class fish : public animal {
public:
	fish() {
		nLegs = 0;
	}

	void swim() { cout << " I swim \n"; }
};