/*
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string S;
	cin >> S;

	unordered_set <string> str;
	for (int gap = 1; gap <= S.size(); gap++) {
		for (int i = 0; i + gap <= S.size(); i++) {
			string s = S.substr(i, i + gap);
			str.insert(s);
		}
	}
	cout << str.size();

	return 0;
}
*/