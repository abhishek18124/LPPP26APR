#include<iostream>

using namespace std;

// void incr(int a) {
// 	a++;
// }

int incr(int a) {
	a++;
	return a;
}

int main() {

	int a = 10;

	cout << a << '\n'; // 10

	// incr(a);

	a = incr(a);

	cout << a << '\n'; // expected 11

	return 0;
}