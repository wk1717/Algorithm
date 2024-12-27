/*
#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

set <pair<int, int>> quest;
map <int, vector<int>> quest_solved;

void solved(int q) {
	for (vector<int>::size_type i = 0; i < quest_solved[q].size(); i++) {
		int level = quest_solved[q][i];
		quest.erase({ level, q });
	}
	quest_solved.erase(q);
}

void recommend(int r) {
	if (r == 1) {
		set<pair<int, int>>::iterator it = --quest.end();
		cout << it->second << '\n';
	}
	else {
		set<pair<int, int>>::iterator it = quest.begin();
		cout << it->second << '\n';
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N;
	int q, l;
	for (int i = 0; i < N; i++) {
		cin >> q >> l;
		quest.insert({ l,q });
		quest_solved[q].push_back(l);
	}
	cin >> M;
	for (int m = 0; m < M; m++) {
		string com;
		cin >> com;
		if (com == "add") {
			cin >> q >> l;
			quest.insert({ l,q });
			quest_solved[q].push_back(l);
		}
		else if (com == "recommend") {
			int r;
			cin >> r;
			recommend(r);
		}
		else {
			cin >> q;
			solved(q);
		}
	}
}
*/