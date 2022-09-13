#include <iostream>

using namespace std;

class Man{
private:
	int i = 0;
	double radius = 2;
	const double pi = 3.14;		

public:
	static int count;

	double getArea() const {
		double area = radius * radius * pi;
		return area;
	}

	double getRadius() {
		return radius;
	}
};

int Man::count;

int main() {
	Man no;
	const Man t;

	cout << no.getArea() << endl;
	cout << t.getArea() << endl;

	cout << no.getRadius() << endl;

	cout<< no.count << endl;

	cout<< Man::count << endl;
	// cout << t.getRadius() << endl;
	
	return 0;
}