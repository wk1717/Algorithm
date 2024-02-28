/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, K, v;

	vector<int> v1, sensor, distance;
	cin >> N;
	cin >> K;
	
	for (int i = 0; i < N; i++) {
		cin >> v;
		v1.push_back(v);
	}
	stable_sort(v1.begin(), v1.end());

	for (int i = 0; i < N - 1; i++) {
		int dis = v1[i + 1] - v1[i];
		distance.push_back(dis);
	}

	stable_sort(distance.begin(), distance.end());

	int sum = 0;

	while (distance.size() > 0 && K > 1) {
		distance.pop_back();
		K--;
	}
	for (int i = 0; i < distance.size(); i++)
		sum += distance[i];
	
	cout << sum;

	return 0;

}
*/