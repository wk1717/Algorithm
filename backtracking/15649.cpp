#include <iostream>
#include <vector>
using namespace std;

int N, M;
bool visited[9];
vector <int> num;

void print() {
	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << " ";
	}
	cout << '\n';
}

void DFS(int cnt) {
	if (cnt == M) { print();  return; }

	for (int i = 1; i <= N; i++) {
		if (visited[i] == true) continue;
		visited[i] = true;
		num.push_back(i);
		DFS(cnt + 1);
		num.pop_back();
		visited[i] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	DFS(0);
}
