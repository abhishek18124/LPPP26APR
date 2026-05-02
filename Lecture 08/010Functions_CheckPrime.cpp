#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {

	int i = 2;

	while (i * i <= n) {

		if (n % i == 0) {

			// you've found a factor of n
			// in the range 2 to n-1

			return false;

		}

		i++;

	}

	return true;

}

int main() {

	int n;
	cin >> n;

	if (isPrime(n)) {
		cout << n << " is prime\n";
	} else {
		cout << n << " is not prime\n";
	}

	return 0;
}