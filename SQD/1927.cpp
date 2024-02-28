/*ÃÖ¼ÒÈü
#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	priority_queue<int, vector<int>, greater<int>> minHeap;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		if (x == 0) {
			if (!minHeap.empty()) {
				cout << minHeap.top() << '\n';
				minHeap.pop();
			}
			else
				cout << "0" << '\n';
		}
		else
			minHeap.push(x);
	}
	return 0;
}
*/