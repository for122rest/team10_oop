#include <iostream>
#include "store.h"
using namespace std;

int main() {
	store a[5], *b;
	cout << "	" << sizeof(a) << endl;
	for (int i = 0; i < 5; i++) {
		a[i] = store(i + 2, 3, 4, 1000 + 100 * i, 500, 600);
	}
	cout << a[2].apple.many << "    " << a[2].apple.price << endl;
	cout << (a + 4)->apple.many << "    " << (a + 4)->apple.price << endl;
	b = a + 2;
	cout << b[0].apple.many << "    " << b[0].apple.price << endl;
	cout << (b + 2)->apple.many << "    " << (b + 2)->apple.price << endl;
	return 123;

	//P18 연습1 -> store에서 mango 추가 => 160
	//P18 연습2 -> store에서 all_number() 추가 => 120
}