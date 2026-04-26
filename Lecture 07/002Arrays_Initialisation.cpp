#include<iostream>
#include<cstring>

using namespace std;

int main() {

	int A[5] = {10, 20, 30, 40, 50};

	cout << A[0] << " "
	     << A[1] << " "
	     << A[2] << " "
	     << A[3] << " "
	     << A[4] << endl;

	// int i = 0;

	// while (i < 5) {
	// 	cout << A[i] << " ";
	// 	i++;
	// }

	for (int i = 0; i < 5; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	int B[] = {100, 200, 300};

	cout << B[0] << " "
	     << B[1] << " "
	     << B[2] << endl;

	// int C[5] = {1, 2, 3, 4, 5, 6};

	int D[5] = {1, 2, 3};

	cout << D[0] << " "
	     << D[1] << " "
	     << D[2] << " "
	     << D[3] << " "
	     << D[4] << endl;

	int E[5] = {};

	cout << E[0] << " "
	     << E[1] << " "
	     << E[2] << " "
	     << E[3] << " "
	     << E[4] << endl;

	int F[5] = {0};

	cout << F[0] << " "
	     << F[1] << " "
	     << F[2] << " "
	     << F[3] << " "
	     << F[4] << endl;

	int G[5];

	memset(G, 0, sizeof(G));

	cout << G[0] << " "
	     << G[1] << " "
	     << G[2] << " "
	     << G[3] << " "
	     << G[4] << endl;

	int H[5];

	memset(H, -1, sizeof(H));

	cout << H[0] << " "
	     << H[1] << " "
	     << H[2] << " "
	     << H[3] << " "
	     << H[4] << endl;

	int I[5];

	memset(I, 2, sizeof(I));

	cout << I[0] << " "
	     << I[1] << " "
	     << I[2] << " "
	     << I[3] << " "
	     << I[4] << endl;

	return 0;
}