#include <iostream>
using namespace std;
class a {
public:
	float x = 100;
	void showx() {
		cout << "x " << x << endl;
		cout << "y " << y << endl;
		cout << "yy " << gety() << endl;
	}
	void sety(float z) { y = z; }
	float showy() { return y; }
private:
	float y = 200;
	float gety() { return y; }
	void pprivate() {
		cout << gety() << endl;
	}
};

int main() {
	a b;
	b.showx();
	b.sety(30);
	b.showx();
	cout << b.showy() << endl;
}
