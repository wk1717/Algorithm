#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	int T, J, N;
	cin >> T;
	while (T > 0) {
		cin >> J >> N;
		vector <int> box;
		for (int i = 0; i < N; i++) {
			int R, C;
			cin >> R >> C;
			box.push_back(R * C);
		}
		stable_sort(box.begin(), box.end());

		int total = 0;
		for (int i = 0; J > 0; i++) {
			if (box[N - 1] <= J) {
				J -= box[N - 1];
				total++;
			}
			else
				break;
		}

		cout << total << '\n';
		T--;
	}
	return 0;
}