/*
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	queue <int> q1;
	for (int i = 1; i <= N; i++) {
		q1.push(i);
	}
	cout << "<";
	while (!q1.empty()) {
		int add;
		int j = 0;
		for (int i = 0; i < K; i++) {
			add = q1.front();
			q1.pop();
			if (i == K - 1) {
				cout << add;
				if (!q1.empty())
					cout << ", ";
			}
			else q1.push(add);
		}
	}
	cout << ">";
	return 0;
}
*/