#include "LOL.h"
#include <iostream>
#include <fstream>
using namespace std;

//constructor
LOL::LOL() { };
LOL::LOL(int A, int B, float C, float D, float E, float F, int G, string ss) {
	N1 = A;	N2 = B;	a = C;	b = D;	x0 = E;	dx = F;	m = G;	fileName = ss;
	f.open(fileName, ios::binary | ios::out);
	f.write((char*)&N1, sizeof(int));
	f.write((char*)&N2, sizeof(int));
	f.write((char*)&a, sizeof(float));
	f.write((char*)&a, sizeof(float));
	f.write((char*)&b, sizeof(float));
	f.write((char*)&dx, sizeof(float));
	f.write((char*)&m, sizeof(int));

}

//destructor
LOL::~LOL() {
	delete[] f1d;
	delete[] f2d;
	if (f.is_open()) {
		f.close();
	}
	cout << "delete success\n";
}


//member function
void LOL::f1() {
	f1d = new int[N2 - N1 + 1];
	for (int i = N1; i <= N2; i++) {
		f1d[i - N1] = i * (i + 1) / 2;
	}
	f.write((char*)f1d, sizeof(int) * (N2 - N1 + 1));
}

void LOL::f2() {
	float x;
	x = x0;
	f2d = new float[m];
	for (int i = 0; i < m; i++, x += dx) {
		f2d[i] = a * x + b;
	}
	f.write((char*)f2d, sizeof(int) * m);
}
