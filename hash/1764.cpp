
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	int N, M, count = 0;
	string name;
	map<string, bool> list;
	vector<string> nm;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> name;
		list.insert(make_pair(name, true));
	}
	for (int i = 0; i < N; i++) {
		cin >> name;
		if (list[name]) {
			nm.push_back(name);
			count++;
		}
	}
	sort(nm.begin(), nm.end());

	cout << count << '\n';
	for (int i = 0; i < nm.size(); i++) {
		cout << nm[i] << '\n';
	}

	return 0;
}
