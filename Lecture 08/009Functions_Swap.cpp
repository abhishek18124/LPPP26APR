#include<iostream>

using namespace std;

void mySwap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {

	int a = 10;
	int b = 20;

	cout << a << " " << b << '\n';

	mySwap(a, b);

	cout << a << " " << b << '\n';

	return 0;
}