#pragma once
#include "fruit.h"

class store {
public:
	store() {};
	store(int a, int b, int c, float d, float e, float f) {
		apple = fruit(d, a);
		pear = fruit(e, b);
		peach = fruit(f, c);
		//����1
		//mango = fruit();
	}
	fruit apple, pear, peach;
	//����1
	//fruit mango;
	float total();
	//����2
	int all_number();
};