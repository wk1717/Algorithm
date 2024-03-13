
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N;
	cin >> N;
	priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (a != 0) {
			if (a < 0) {
				minHeap.push(make_pair(- a, a));
			}
			else {
				minHeap.push(make_pair(a, a));
			}
		}
		else {
			if (!minHeap.empty()) {
				cout << minHeap.top().second << "\n";
				minHeap.pop();
			}
			else
				cout << "0" << "\n";
		}
	}
	return 0;
}
