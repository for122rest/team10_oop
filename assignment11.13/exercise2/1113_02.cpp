//storeMain.cpp
#include <iostream>
#include "store.h"
using namespace std;

int main() {
	store A, B;
	B = store(3, 4, 5, 100, 200, 300);
	cout << A.total() << endl;
	cout << B.total() << endl;
	cout << "Mango price " << A.mango.price << endl;
	cout << "Mango number " << A.mango.many << endl;
	return 123;
}