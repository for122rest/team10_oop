//P27, Exercise 3 
#include <iostream>
using namespace std;
#include "store.h"

int main() {
	store a, b;
	a = store(4, 3, 3, 800, 1000, 800);
	b = store(3, 3, 4, 1000, 1200, 1000);
	a *= 2;
	cout << "apple : " << a.apple.many << " pear : " << a.pear.many << " peach : " << a.peach.many << endl;
	b *= 100;
	cout << "apple : " << b.apple.many << " pear : " << b.pear.many << " peach : " << b.peach.many << endl;

}