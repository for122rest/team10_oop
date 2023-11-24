#include <iostream>

class Car {
public:
    int abc;
    Car(int m) : abc(m) {}

    Car operator+(const Car& abc1) const {
        return Car(this->abc + abc1.abc);
    }
};

int main() {
    Car A(100);
    Car B(200);

    Car C = A + B;

    std::cout << "A mileage: " << A.abc << std::endl;
    std::cout << "B mileage: " << B.abc << std::endl;
    std::cout << "C mileage (A + B): " << C.abc << std::endl;

    return 0;
}
