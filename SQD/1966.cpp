/*
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int T, N, M, imp;
	cin >> T;

	for (int i = 0; i < T; i++) {
		queue <pair<int, int>> q1;
		priority_queue <int> pq;
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			cin >> imp;
			q1.push({ i, imp });
			pq.push(imp);
		}
		int count = 0;
		while (!q1.empty()) {
			int index = q1.front().first;
			int value = q1.front().second;
			q1.pop();
			if (pq.top() == value) {
				pq.pop();
				count++;
				if (index == M) {
					cout << count << endl;
					break;
				}
			}
			else q1.push({ index, value });
		}
	}
	return 0;
}
*/