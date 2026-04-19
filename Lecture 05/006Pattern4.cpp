#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {

		// for the ith row, print i numbers

		int num = i % 2 == 0 ? 0 : 1;

		for (int j = 1; j <= i; j++) {
			cout << num;
			// if(num == 0) {
			// 	num = 1;
			// } else {
			// 	num = 0;
			// }

			// num = !num;

			num = 1 - num;

		}

		cout << endl;

	}

	return 0;
}