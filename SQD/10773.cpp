/*
#include <iostream>
#include <stack>
using namespace std;


int main()
{
	int k, number[100000], final = 0;
	stack<int> s1;
	cin >> k;
	fill_n(number, k, -1);

	for (int i = 0; i < k; i++) {
		cin >> number[i];
	}
	for (int i = 0; i < k; i++) {
		s1.push(number[i]);
		if (number[i] == 0) {
			if (!s1.empty()) {
				s1.pop();
			}
			if (!s1.empty()) {
				s1.pop();
			}
		}
	}

	while (!s1.empty()) {
		final += s1.top();
		s1.pop();
	}
	cout << final;
	return 0;
}
*/