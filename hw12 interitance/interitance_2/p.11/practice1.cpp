#include <iostream>
using namespace std;
#include "CarS3.h"
#include "SUVS3.h"
int main() {
	SUV* newSUV = new SUV();
	Car* kcar = new Car(1, 1, 1);

	newSUV->setPrice(5000);
	cout << " price " << newSUV->price << "\n";
	cout << " price " << newSUV->getPrice() << "\n";

	newSUV->setSparewheels(2);
	std::cout << "Spare wheels are " << newSUV->getSparewheels() << std::endl;
	cout << newSUV->empty_chair(2) << endl;
	cout << newSUV->callmynum() << endl;
	cout << newSUV->my_num << endl;
	delete newSUV;
	return 0;
}