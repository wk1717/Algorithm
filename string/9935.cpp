#include <iostream>
#include <stack>
using namespace std;

int main() {
	string str1, bomb;
	cin >> str1;
	cin >> bomb;

	stack <char> s1;

	for (int i = str1.size() - 1; i >= 0; i--) {
		for (int j = 0; j < bomb.size(); j++) {
			if (str1[i] != bomb[j]) {
				s1.push(str1[i]);
				break;
			}
		}
	}


	if (!s1.empty()) {
		while (!s1.empty()) {
			cout << s1.top();
			s1.pop();
		}
	}
	else
		cout << "FRULA";
}