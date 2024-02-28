/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	while (N != 0) {
		static int turn = (N - 1) / 3;
		static int Ns = (N - 1) % 3;
		if (Ns == 0) {
			if (turn % 2 == 0) {
				cout << "CY";
				break;
			}
			else {
				cout << "SK";
				break;
			}
		}
		else {
			Ns = Ns - 1;
			turn++;
		}
	}
	return 0;
}
*/