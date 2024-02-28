/*√÷¥Î»¸
#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	priority_queue<int> maxHeap;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		if (x == 0) {
			if (!maxHeap.empty()) {
				cout << maxHeap.top() <<'\n';
				maxHeap.pop();
			}
			else
				cout << "0" << '\n';
		}
		else
			maxHeap.push(x);
	}
	return 0;
}
*/