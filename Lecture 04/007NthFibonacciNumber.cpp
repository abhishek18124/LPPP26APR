#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	if (n == 0 or n == 1) {

		cout << n << endl;

	} else {

		// n >= 2

		int a = 0; // init a represents 0th fib. no.
		int b = 1; // init b represents 1st fib. no.

		int i = 1;

		// time : n.const ~ O(n)
		// space: O(1)

		while (i <= n - 1) {
			int c = a + b;
			a = b;
			b = c;
			i = i + 1;
		}

		cout << b << endl;

	}

	return 0;
}