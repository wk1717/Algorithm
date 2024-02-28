/*
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> v1, pair<int, int> v2) {
	if (v1.first == v2.first)
		return v1.second < v2.second;
	else
		return v1.first < v2.first;
}

int main() {
	cin.tie(0);
	cout.tie(0);

	int N;
	priority_queue<int, vector<int>, greater<int>> minHeap;
	vector <pair<int, int>> v1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int num, start, end;
		cin >> num >> start >> end;
		v1.push_back(make_pair(start, end));
	}

	sort(v1.begin(), v1.end(), compare);

	minHeap.push(v1[0].second);
	int cnt = 1;
	int i = 1;

	for (int i = 1; i < N; i++) {
		minHeap.push(v1[i].second);
		while (!minHeap.empty() && minHeap.top() <= v1[i].first) {
			minHeap.pop();
		}
		cnt = max(cnt, (int)minHeap.size());
	}

	cout << cnt;

	return 0;
}
*/