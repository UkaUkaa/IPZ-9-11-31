#include <iostream>

using namespace std;

class Man {
private:
	int i;
	int y;

public:
	Man() {
		i = 5;
		y = 6;
	}

	Man(int iM, int yM) {
		i = iM;
		y = yM;
	}

	int Man operator+(Man temp) {
		return temp;
	}

};

int main() {

	
	return 0;	
}