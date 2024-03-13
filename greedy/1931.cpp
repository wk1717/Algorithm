/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	vector <pair<int, int>> SE;

	for (int i = 0; i < N; i++) {
		int start, end;
		cin >> start >> end;
		SE.push_back(make_pair(end, start));
	}

	sort(SE.begin(), SE.end());
	
	int total = 1;
	for (int i = 1; i < N; i++) {
		static int state = SE[0].first;
		if (state <= SE[i].second) {
			state = SE[i].first;
			total++;
		}
	}
	cout << total;

	return 0;
}
*/