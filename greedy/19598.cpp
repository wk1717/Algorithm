/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int N;
	priority_queue<int, vector<int>, greater<int>> heap;
	vector <pair<int, int>> v1;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int first, end;
		cin >> first >> end;
		v1.push_back(make_pair(first, end));
	}
	sort(v1.begin(), v1.end());

	heap.push(v1[0].second);
	int cnt = 1;
	for (int i = 1; i < N; i++) {
		while (!heap.empty() && heap.top() <= v1[i].first) {
			heap.pop();
		}
		heap.push(v1[i].second);
		cnt = max(cnt, (int)heap.size());
	}
	cout << cnt;

	return 0;
}
*/