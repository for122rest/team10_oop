#pragma once
#include <fstream>
using namespace std;

class LOL {
public:
	LOL();
	LOL(int A, int B, float C, float D, float E, float F, int G);
	~LOL();

	int N1, N2, m;
	float a, b, x0, dx;
	ofstream f;
	int* f1d;
	float* f2d;

	void f0(string);
	void f1();
	void f2();
};