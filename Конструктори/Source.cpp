#include <iostream>

using namespace std;

class Cars {
private:
	int year;
	string name;

public:
	Cars() {
		year = 2015;
		name = "VW";
	}

	Cars(int yearMain) {
		year = yearMain;
		name = "BMW";
	}

	Cars(int yearMain, string nameMain) {
		year = yearMain;
		name = nameMain;
	}

	void get_car() {
		cout << "Name: " << name << "\nYear: " << year << endl;
	}
};



int main() {
	int a[5];
	cout << a << endl;
	Cars carTwo(2020);
	carTwo.get_car();

	Cars car;
	car.get_car();

	Cars carNew(2050, "KIA");
	carNew.get_car();


	return 0;
}