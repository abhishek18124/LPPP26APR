#include<iostream>

using namespace std;

void incr(int& b) {
	b++;
}

int main() {

	int a = 10;

	cout << a << '\n';

	incr(a);

	cout << a << '\n';

	return 0;
}