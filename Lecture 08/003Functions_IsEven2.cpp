#include<iostream>

using namespace std;

// bool isEven(int n) {
// 	if (n % 2 == 0) {
// 		return true;
// 	} else {
// 		return false;
// 	}
// }

// bool isEven(int n) {
// 	if(n%2 == 0) {
// 		return true;
// 	}
// 	return false;
// }

// bool isEven(int n) {
// 	return n%2 == 0 ? true : false;
// }

bool isEven(int n) {
	return n % 2 == 0; // in C++ you can return an expr from a fn since an expr is essentially a value
}


int main() {

	bool ans;

	ans = isEven(4);

	cout << ans << '\n';

	cout << isEven(5) << '\n';

	// if a fn call returns a value, you can treat
	// that fn call as an expr

	if (isEven(7)) {
		cout << "even" << endl;
	} else {
		cout << "odd" << endl;
	}

	if (isEven(6)) {
		cout << "even" << endl;
	} else {
		cout << "odd" << endl;
	}

	isEven(8) ? cout << "even\n" : cout << "odd\n";

	isEven(9) ? cout << "even\n" : cout << "odd\n";

	return 0;
}