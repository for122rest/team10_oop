#pragma once
class fruit {
public:
	//constructor
	fruit() {
		price = 200;	many = 2;	day = 12;
	}
	fruit(float p, int n) {
		price = p;	many = n;	day = 12;
	}
	fruit(float p, int n, int d) {
		price = p;	many = n;	day = d;
	}
	//member data
	int many;
	int day;
	float price;
	//member function
	float show();
};