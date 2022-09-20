#include <iostream>
using namespace std;

class number {
public:
	int num1;
	int num2;

	number() {
		num1 = 1;
		num2 = 2;
	}

	number(int i, int k) {
		num1 = i;
		num2 = k;
	}

	void get() {
		cout << "Num 1 = " << num1 << endl << "Num 2 = " << num2 << endl;
	}
};

number operator +(number temp, number clas) {
	number Temp;
	Temp.num2 = temp.num1 + clas.num2;
	return Temp;
}

int main() {

	number temp; // 1 2
	number temp_two(2, 99);
	number temp_class; // 1 2
	
	temp_class = temp + temp_two; // 1 100
	temp_class.get();

	return 0;
}
