/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	int N, K, total = 0;
	cin >> N >> K;

	vector <int> coin;
	for (int i = 0; i < N; i++) {
		int c;
		cin >> c;
		coin.push_back(c);
	}

	for (int i = N - 1; i >= 0; i--) {
		if (K >= coin[i]) {
			for (int j = 0; K >= coin[i]; j++) {
				K -= coin[i];
				total++;
			}
		}
	}
	cout << total;

	return 0;
}
*/