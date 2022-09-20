#include <iostream>
using namespace std;


class numer {
private:
	int num1;
	int num2;

public:
	numer(){
		num1 = 1;
		num2 = 3;
	}

	numer(int iMain, int yMain) {
		num1 = yMain;
		num2 = iMain;
	}

	numer operator+(numer temp) {
		numer fTemp;

		fTemp.num1 = temp.num1 + temp.num2;
		return fTemp;
	}


	void get() {
		cout << num1 << " " << num2;
	}
};

int main() {
	numer one; // num1 = 1
	numer two(4, 12); // num1 = 4 num2 = 12
	numer three; // num1 = 1 num2 = 3

	three = one + two;
	three.get();


	return 0;
}


