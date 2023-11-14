#include "store.h"

float store::total() {
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	//연습1
	//x += mango.show();
	return x;
}

//연습2
int store::all_number() {
	int n = apple.many;
	n += pear.many;
	n += peach.many;
	return n;
}