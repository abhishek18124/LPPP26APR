#include<iostream>

using namespace std;

int multiply(int a, int b) {
	int c = a * b;
	return c;
}

int main() {

	cout << multiply(2, 3) << '\n';

	cout << 10 + 20 + multiply(4, 5) << '\n';

	int ans = multiply(6, 7);

	cout << ans << '\n';

	return 0;
}