#include <iostream>
using namespace std;
#include "Car.h"
#include "Engineer.h"
#include "SUV.h"
int main(int argc, char* argv[]) {
	SUV* newSUV = new SUV();
	Engineer engineer;
	newSUV->setPrice(5000);

	engineer.setwheel(newSUV, 3);
	cout << engineer.getwheel(newSUV) << endl;

	delete newSUV;
	return 123;
}