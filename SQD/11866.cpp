/*
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	queue <int> lin;

	for (int i = 1; i <= N; i++) {
		lin.push(i);
	}
	cout << "<";
	while (!lin.empty()) {
		for (int i = 0; i < K - 1; i++) {
			lin.push(lin.front());
			lin.pop();
		}
		cout << lin.front();
		lin.pop();

		if (!lin.empty()) {
			cout << ", ";
		}
	}
	cout << ">";
	return 0;
}
*/