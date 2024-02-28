/*√÷¥Î»¸
#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	priority_queue<int> maxHeap;

	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int a, anum;
		cin >> a;
		if (a != 0) {
			for (int j = 0; j < a; j++) {
				cin >> anum;
				maxHeap.push(anum);
			}
		}
		else {
			if (!maxHeap.empty()) {
				cout << maxHeap.top() << '\n';
				maxHeap.pop();
			}
			else
				cout << "-1" << '\n';
		}
	}
	return 0;
}
*/