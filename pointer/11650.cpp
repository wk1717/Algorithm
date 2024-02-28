/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
	if (p1.first == p2.first)
		return p1.second < p2.second;
	else 
		return p1.first < p2.first;
}

int main() {
	int N, X, Y;
	vector<pair<int, int>> point;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> X >> Y;
		point.push_back(make_pair(X, Y));
	}
	sort(point.begin(), point.end(), compare);
	
	for (int i = 0; i < N; i++) {
		cout << point[i].first << " " << point[i].second << '\n';
	}
	return 0;
}
*/