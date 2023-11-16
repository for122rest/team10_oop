#include <iostream>
#include <fstream>
#include "LOL.h"
using namespace std;

int main() {
	LOL cha1, cha2, cha3, cha4;
	cha1.N1 = 5;	cha1.N2 = 10;	cha1.a = 2;	cha1.b = 3;	cha1.x0 = -5;	cha1.dx = 0.1;	cha1.m = 10;
	cha2.N1 = 7;	cha2.N2 = 100;	cha2.a = -3.5;	cha2.b = 4;	cha2.x0 = 100;	cha2.dx = 10;	cha2.m = 15;
	cha3.N1 = 12;	cha3.N2 = 17;	cha3.a = 0.01;	cha3.b = 0.2;	cha3.x0 = 1.5;	cha3.dx = 0.08;	cha3.m = 20;
	cha4.N1 = 10;	cha4.N2 = 20;	cha4.a = 4.2;	cha4.b = -5.3;	cha4.x0 = 2.1;	cha4.dx = 0.2;	cha4.m = 5;

	cha1.f0("alkali.dat");
	cha1.f1();
	cha1.f2();
	cha2.f0("amumu.dat");
	cha2.f1();
	cha2.f2();
	cha3.f0("annie.dat");
	cha3.f1();
	cha3.f2();
	cha4.f0("ashe.dat");
	cha4.f1();
	cha4.f2();
	return 10;
}
