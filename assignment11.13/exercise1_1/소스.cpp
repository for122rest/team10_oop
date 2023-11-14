#include <iostream>
#include "fruit.h"
using namespace std;
int main() {
	fruit apple, strawberry, peach, mango;
	strawberry = fruit(300, 5);
	peach = fruit(1000, 5);
	mango = fruit(700, 8);
	cout << apple.show() << endl;
	cout << strawberry.show() << endl;
	cout << peach.show() << endl;
	cout << " peach " << peach.price << endl;
	return 123;
}