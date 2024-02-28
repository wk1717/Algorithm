/*
* pointer
* 
#include <iostream>
using namespace std;

int main() {
	int n, number[9];
	
	for (int i = 0; i < 9; i++) {
		cin >> n;
		number[i] = n;
	}
	int* max = &number[0];
	for (int i = 0; i < 9; i++) {
		if (*max < number[i])
			max = &number[i];
	}
	cout << *max << '\n';
	for (int i = 0; i < 9; i++) {
		if (number[i] == *max)
			cout << i + 1;
	}
	return 0;
}
*/