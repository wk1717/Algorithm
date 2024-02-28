/*
#include <iostream>
#include <stack>
using namespace std;


int main()
{
	int k, number[100000], num[100000], final = 0;
	fill_n(number, 100000, '\0');
	fill_n(num, 100000, '\0');
	stack<int> s1;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> number[i];
	}
	for (int i = 0; i < k; i++) {
		s1.push(number[i]);
		if (number[i] == 0) {
			s1.pop();
			s1.pop();
		}
	}
	int j = 0;
	for (int i = 0; i < k; i++) {
		if (number[i] != '\0') {
			num[j] = number[i];
			j++;
		}
	}
	for (int i = 0; num[i]!='\0'; i++) {
		final += s1.top();
	}
	cout << final;
}
*/
