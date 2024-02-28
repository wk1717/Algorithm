/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector <int> cost;
	vector <int> team;
	for (int i = 0; i < N; i++) {
		int t; cin >> t;
		team.push_back(t);
	}
	for (int i = 1; i < N; i++) {
		int c = team[i] - team[i - 1];
		cost.push_back(c);
	}
	sort(cost.begin(), cost.end());

	for (int i = 0; K > 1; i++) {
		cost.pop_back(); 
		K--;
	}
	
	
	int sum = 0;
	for (int i = 0; i < cost.size(); i++) {
		sum += cost[i];
	}

	cout << sum;
	
	return 0;
}
*/