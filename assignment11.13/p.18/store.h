#pragma once
#include "fruit.h"

class store {
public:
	store() {};
	store(int a, int b, int c, float d, float e, float f) {
		apple = fruit(d, a);
		pear = fruit(e, b);
		peach = fruit(f, c);
		//연습1
		//mango = fruit();
	}
	fruit apple, pear, peach;
	//연습1
	//fruit mango;
	float total();
	//연습2
	int all_number();
};