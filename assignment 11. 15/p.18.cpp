#include <iostream>
using namespace std;
class a
{
public:
	a() { i++; aa = NULL; cout << i << " con\n"; }
	~a();
	float x, y, * aa;
	static int i;
};
int a::i = 0;
a::~a() {
	if (aa != NULL) {
		delete[] aa;
		cout << i << " done \n";
		aa = NULL;
	}
	else { cout << i << " none \n"; }
	i--;
}

void foo() {
	cout << " foo ";
	a d;
	d.aa = new float[200];  cout << " foo ";
	d.~a();      cout << " foo ";
}

void main() {
	cout << " Main ";
	a b;
	b.x = 200;    cout << " Main ";
	b.~a();  // cout none
	b.aa = new float[10000];
	b.aa[10] = 100;     cout << " Main ";
	cout << b.x << "  ";
	cout << b.aa[10] << endl;    cout << " Main ";
	b.~a();  // cout done
	b.aa = NULL;
	cout << " Main " << b.x << "\n";
	cout << "Main ";
	a cc;
	cc.y = 30; cout << " Main ";
	cc.~a();
	cc.aa = new float[123];
	cc.aa[10] = 50;  cout << "Main ";
	cout << cc.y << "  ";
	cout << cc.aa[10] << endl;    cout << " Main ";
	cc.~a();
	cc.aa = NULL;
	cout << " Main " << cc.y << "\n";
	foo();    cout << " Main ";
}
