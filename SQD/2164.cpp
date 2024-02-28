/*
#include <iostream>
#include <queue>
#include <cstdbool>
using namespace std;

int main() {
	int N;
	queue<int> q1, q2;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		q1.push(i);
	}
	bool a = false;

	while (q1.size() > 1) {
		if (q1.size() > 1)
			a = true;
		else
			false;
		q1.pop();
		if (a) {
			q1.push(q1.front());
			q1.pop();
		}
	}
	cout << q1.front();

	return 0;
}
*/