/*
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare(pair<int, string> n1, pair<int, string> n2) {
	return n1.first < n2.first;
}

int main() {
	int number, N;
	string name;

	cin >> N;
	vector <pair<int, string>> pro;
	for (int i = 0; i < N; i++) {
		cin >> number >> name;
		pro.push_back(make_pair(number, name));
	}
	stable_sort(pro.begin(), pro.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << pro[i].first << " " << pro[i].second << "\n";
	}
	return 0;
}
*/