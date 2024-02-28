/*
#include <iostream>
#include <deque>
using namespace std;

int main()
{
	int N, T;
	char Deque[1000];
	cin >> N;
	deque <char> d1, d2;
	for (int i = 0; i < N; i++) {
		cin >> T;
		for (int i = 0; i < T; i++) {
			cin >> Deque[i];
		}
		d1.push_front(Deque[0]);
		for (int j = 1; j < T; j++) {
			if (d1.front() >= Deque[j]) {
				d1.push_front(Deque[j]);
			}
			else
				d1.push_back(Deque[j]);
		}
		for (int i = 0; i < T; i++) {
				cout << d1.front();
				d1.pop_front();
			}
		cout << endl;
		}
	return 0;
}
*/