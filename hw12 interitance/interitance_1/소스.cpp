#include <iostream>
using namespace std;
class A {
public:
	A() : ii(10) {};
	A(int x) :ii(x) {};
	int ii;
};
class B : public A{
public:
	B() : A(8) { A(88); bbb = ii + 5; ccc = ii * 10; };
// A(88) no variable name
B(int x) : A() { bbb = x; };
int bbb, ccc;
};
void main() {
	B e, f(22);
	cout << e.bbb << endl;
	cout << f.bbb << endl;
	cout << e.ccc << endl;
}
