#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class LOL {
public:
	LOL();
	LOL(int A, int B, float C, float D, float E, float F, int G, string ss);
	~LOL();

	void f1();
	void f2();

private:
	int N1, N2, m;
	float a, b, x0, dx;
	ofstream f;
	string fileName;
	int* f1d;
	float* f2d;
};
