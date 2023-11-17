#include <iostream>
#include <fstream>
#include "LOL.h"
using namespace std;

int main() {
	LOL cha1(5, 10, 2, 3, -5, 0.1, 10, "alkali.dat");
	LOL cha2(7, 100, -3.5, 4, 100, 10, 15, "amumu.dat");
	LOL cha3(12, 17, 0.01, 0.2, 1.5, 0.08, 20, "annie.dat");
	LOL cha4(10, 20, 4.2, -5.3, 2.1, 0.2, 5, "ashe.dat");

	cha1.f1();
	cha1.f2();
	cha2.f1();
	cha2.f2();
	cha3.f1();
	cha3.f2();
	cha4.f1();
	cha4.f2();
	return 10;
}
