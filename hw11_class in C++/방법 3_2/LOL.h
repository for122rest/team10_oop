#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class LOL {
public:
	LOL();
	LOL(int N1, int N2, float a, float b, float x0, float dx, const string& fileName);
	~LOL();

	void f1();
	void f2();

private:
	int N1, N2, m;
	float a, b, x0, dx;
	ofstream f;
	int* f1d;
	float* f2d;
};
