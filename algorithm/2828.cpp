/*
#include <iostream>
using namespace std;

int main()
{
	int N, M, J, result = 0, number[20] = { 0, }, front = 1, back;
	cin >> N >> M;
	cin >> J;
	back = M;

	for (int i = 0; i < J; i++) {
		cin >> number[i];
	}
	for (int i = 0; i < J; i++) {
		if (back < number[i]) {
			int temp = number[i] - back;
			result += temp;
			front += temp;
			back += temp;
		}
		else if (front > number[i]) {
			int temp = front - number[i];
			result += temp;
			front -= temp;
			back -= temp;
		}
	}
	
	cout << result;
	return 0;
}
*/

