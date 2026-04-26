#include<iostream>

using namespace std;

int main() {

	int arr[5];

	cout << "sizeof(arr) = " << sizeof(arr) << endl;

	double brr[10];

	cout << "sizeof(brr) = " << sizeof(brr) << endl;

	char str[50];

	cout << "sizeof(str) = " << sizeof(str) << endl;

	int drr[5];

	drr[0] = 10;
	drr[1] = 20;
	drr[2] = 30;
	drr[3] = 40;
	drr[4] = 50;

	cout << drr[0] << " " << drr[1] << " " << drr[2] << " " << drr[3] << " " << drr[4] << endl;

	int err[5];

	cin >> err[0];
	cin >> err[1];
	cin >> err[2];
	cin >> err[3];
	cin >> err[4];

	cout << err[0] << " " << err[1] << " " << err[2] << " " << err[3] << " " << err[4] << endl;

	return 0;
}