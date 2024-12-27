
#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		string com;
		int num;
		string arr;
		deque <int> d1;

		cin >> com;
		cin >> num;
		cin >> arr;

		string temp = "";
		for (int i = 0; i < arr.size(); i++) {
			if (isdigit(arr[i])) temp += arr[i];
			else if (arr[i] == ',' || arr[i] == ']') {
				if (!temp.empty()) {
					d1.push_back(stoi(temp));
					temp = "";
				}
			}
		}

		bool error = false;
		bool rever = false;
		for (int i = 0; i < com.size(); i++) {
			if (com[i] == 'R') rever = !rever;
			else {
				if (d1.empty()) {
					cout << "error" << '\n';
					error = true;
					break;
				}
				if (rever) d1.pop_back();
				else d1.pop_front();
			}
		}

		if (error) continue;

		if (rever) reverse(d1.begin(), d1.end());
		cout << '[';
		for (int i = 0; i < d1.size(); i++) {
			cout << d1[i];
			if (i != d1.size() - 1) cout << ',';
		}
		cout << ']' << '\n';
	}
}
