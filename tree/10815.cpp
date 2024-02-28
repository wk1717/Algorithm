/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void binary_search(const vector<int>& n, const vector<int>& m) {
	vector<int> count(m.size(), 0);
	
	for (int i = 0; i < m.size(); i++) {
		int left = 0;
		int right = n.size() - 1;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (n[mid] == m[i]) {
				count[i] = 1;
				break;
			}
			else if (n[mid] < m[i])
				left = mid + 1;
			else
				right = mid - 1;	
		}
	}
	for (int i = 0; i < m.size(); i++) {
		cout << count[i] << " ";
	}
}

int main() {
	int N, M;
	int number;
	vector<int> n, m;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> number;
		n.push_back(number);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> number;
		m.push_back(number);
	}
	sort(n.begin(), n.end());
	binary_search(n, m);
	
	return 0;
}
*/