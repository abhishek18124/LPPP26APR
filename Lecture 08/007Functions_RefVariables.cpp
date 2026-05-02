#include<iostream>

using namespace std;


int main() {

	int x = 10;
	int &y = x;

	y++;

	cout << x << '\n';
	cout << y << '\n';

	int z = 20;

	y = z;

	z++;

	cout << x << '\n';
	cout << y << '\n';
	cout << z << '\n';

	return 0;
}