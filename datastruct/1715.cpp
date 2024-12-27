
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N;
	cin >> N;
	priority_queue<int, vector<int>, greater<int>> card;

	for (int i = 0; i < N; i++) {
		int c;
		cin >> c;
		card.push(c);
	}

	if (N == 1) {
		cout << 0;
		return 0;
	}

	int sum = 0;
	while (!card.empty()) {
		if (card.size() == 1) {
			cout << sum;
			return 0;
		}
		int a = card.top(); card.pop();
		int b = card.top(); card.pop();
		sum += a + b;
		card.push(a + b);
	}
}
