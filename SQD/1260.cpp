/*
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int adj[1001][1001];
int visited[1001];
int route[1001];
int N, M, V;
int vertex;

void DFS(int v) {
	fill_n(route, N, 0);
	route[0] = v;
	visited[v] = 1;
	vertex = v;
	int j = 1;
	stack <int> s1;
	do {
		for (int i = N; i > 0; i--) {
			if (adj[vertex - 1][i - 1] && !visited[i]) {
				s1.push(i);
			}
		}
		if (!s1.empty()) {
			vertex = s1.top();
			s1.pop();
			if (!visited[vertex]) {
				visited[vertex] = 1;
				route[j++] = vertex;
			}
		}
	} while (!s1.empty());
}

void BFS(int v) {
	fill_n(route, N, 0);
	fill_n(visited, N + 1, 0);
	route[0] = v;
	visited[v] = 1;
	vertex = v;
	int j = 1;
	queue <int> s2;
	do {
		for (int i = 0; i < N; i++) {
			if (adj[vertex - 1][i] && !visited[i + 1])
			s2.push(i + 1);

		}
		if (!s2.empty()) {
			vertex = s2.front();
			s2.pop();
			if (!visited[vertex]) {
				visited[vertex] = 1;
				route[j++] = vertex;
			}
		}
	} while (!s2.empty());
}

int main() {
	int a, b;
	
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		adj[a - 1][b - 1] = 1;
		adj[b - 1][a - 1] = 1;
	}
	DFS(V);
	for (int i = 0; i < N && route[i] != 0; i++) {
		cout << route[i] << ' ';
	}
	cout << endl;
	BFS(V);
	for (int i = 0; i < N && route[i] != 0; i++) {
		cout << route[i] << ' ';
	}
	
	return 0;
}
*/