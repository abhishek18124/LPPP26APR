// n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[100]; // based on constraints

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int t;
	cin >> t;

	// time : O(n)

	bool flag = false; // assume t is not present in arr[]

	for (int i = 0; i < n; i++) {
		if (arr[i] == t) {
			flag = true;
			cout << i << " ";
		}
	}

	if (flag == false) {
		cout << -1;
	}

	return 0;
}