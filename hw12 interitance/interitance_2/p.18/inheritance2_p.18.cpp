#include <iostream>
using namespace std;
#include "Car.h"
#include "inheritance2_p.18.h"
#include "Motor.h"

int main() {
	Car* newSUV = new SUV();

	newSUV->klaxon(3);
}