#include <iostream>
using namespace std;

int addFunction(int i, int y) {
	return i + y;
}

string addFunction(string i, string y) {
	return i + y;
}

string addFunction(int i, string y) {
	string temp;
	for (int k = 0; k < i; k++) {
		temp += y;
	}
	return temp;
}

int addFunction(int i) {
	return i * 10;
}


/*
int main() {
	int i, y;

	string is, ys;

	is = "abz";
	ys = "bbb";

	i = 5;
	y = 5;


	cout << addFunction(i) << endl;


	return 0;
}*/