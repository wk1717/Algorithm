/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(const vector<string>& w1, const vector<string>& w2) {
	if (w1.size() == w2.size())
		return w1 < w2;
	return w1.size() < w2.size();
}

int main() {
	int N;
	string n_word;
	vector <string> word;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> n_word;
		word.push_back(n_word);
	}
	stable_sort(word.begin(), word.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << word[i];
	}
	return 0;
}
*/