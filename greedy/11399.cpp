/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, time = 0;
	
	cin >> N;
	vector <int> person;

	for (int i = 0; i < N; i++) {
		int p;
		cin >> p;
		person.push_back(p);
	}
	sort(person.begin(), person.end());

	vector <int> sum;

	int n = 0;
	while (n < N) {
		int total = 0;
		n++;
		for (int i = 0; i < n; i++) {
			total += person[i];
		}
		sum.push_back(total);
	}
	for (int i = 0; i < sum.size(); i++)
		time += sum[i];
	cout << time;

	return 0;
}
*/