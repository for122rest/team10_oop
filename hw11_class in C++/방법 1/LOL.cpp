#include "LOL.h"

void LOL::f0(string ss) {
	f.open(ss, ios::binary | ios::out);
	f.write((char*)&N1, sizeof(int));
	f.write((char*)&N2, sizeof(int));
	f.write((char*)&a, sizeof(float));
	f.write((char*)&a, sizeof(float));
	f.write((char*)&b, sizeof(float));
	f.write((char*)&dx, sizeof(float));
	f.write((char*)&m, sizeof(int));
}

void LOL::f1() {
	int* f1d;
	f1d = new int[N2 - N1 + 1];
	for (int i = N1; i <= N2; i++) {
		f1d[i - N1] = i * (i + 1) / 2;
	}
	f.write((char*)f1d, sizeof(int) * (N2 - N1 + 1));
	delete f1d;
}

void LOL::f2() {
	float* f2d, x;
	x = x0;
	f2d = new float[m];
	for (int i = 0; i < m; i++, x += dx) {
		f2d[i] = a * x + b;
	}
	f.write((char*)f2d, sizeof(int) * m);
	delete f2d;
	f.close();
}