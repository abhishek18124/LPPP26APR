#include<iostream>

using namespace std;

void greet() {
	cout << "hello\n";
	return; // optional
}


int main() {

	cout << "I am inside the main(), before greet()\n";

	greet();

	cout << "I am inside the main(), after greet()\n";

	return 0;
}