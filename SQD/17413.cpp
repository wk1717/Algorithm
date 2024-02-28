/*
#include <iostream>
#include <string>
#include <stack>
#include <cstdbool>
using namespace std;

void reverse(string str) {
	stack <char> input;
	bool flag = false;
	
	for (int i = 0; i <= str.size(); i++) {
		int j;
		if (str[i] == '<') {
			flag = true;
		}
		if (str[i] == '>') {
			while (!input.empty()) {
				input.pop();
			}
		}
		if (str[i] == ' ' || str[i] == '<' || i == str.size()) {
			j = i - input.size();
			while (!input.empty()) {
				str[j++] = input.top();
				input.pop();
			}
		}
		else
			input.push(str[i]);
	}
	cout << str;
}

int main() {
	string str;

	getline(cin, str);
	
	reverse(str);
	return 0;
}
*/