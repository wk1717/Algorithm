/*
* string
* 
#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	int alphabet[26];
	fill_n(alphabet, 26, -1);
	
	cin >> S;

	for (int i = 0; i < S.length(); i++) {
		char p = S[i];
		if (alphabet[p - 'a'] == -1)
			alphabet[p - 'a'] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}
	return 0;
}
*/