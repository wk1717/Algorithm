/*
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	int T, n;
	string clo1, clo2;

	cin >> T;
	for (int i = 0; i < T; i++) {
		map <string, int> fasion;
		vector <string> name;
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> clo1 >> clo2;
			if (fasion.find(clo2) == fasion.end()) {
				fasion.insert(make_pair(clo2, 1));
				name.push_back(clo2);
			}
			else {
				fasion[clo2]++;
			}
		}
		
		int result = 1;
		for (int k = 0; k < name.size(); k++) {
			result *= (fasion[name[k]] + 1);
		}
		
		cout << result - 1 << '\n';
	}
	return 0;
}
*/