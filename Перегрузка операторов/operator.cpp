#include <iostream>
using namespace std;

class First {
private:
	int i = 1;
	int b = 5;

public:
	First() {}

	First(int iMain, int bMain) {
		i = iMain;
		b = bMain;
	}
	
	void get() {
		cout << "i: " << i << "\nb: " << b << endl;
	}

	First operator*(int num) {
		First Functemp;
		Functemp.i = this->i * num;
		Functemp.b = this->b * num;
		return Functemp;

	}

};



int main() {

	/*
	obj  (1  5)
	obj2 (10  10)
	obj3 (5   5) // 1  5

	25 + 17i

	3 - 2x
	*/


	First obj(10, 8), obj2(10, 10);

	First b;

	b = obj * 2;

	b.get();



	return 0;
}
