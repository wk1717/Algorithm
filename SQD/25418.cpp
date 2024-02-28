/*
#include <iostream>
#include <queue>
using namespace std;

int A, K;
int visited[1000001];

int main() {
	cin >> A >> K;

	queue <int> que;
	int vertex = A;
	que.push(vertex);
	visited[vertex] = 1;
	int count = 0;
	while (!que.empty()) {
		if (A == K) {
			cout << count;
			break;
		}
		int qsize = que.size();
		for (int i = 0; i < qsize; i++){
			vertex = que.front();
			que.pop();
			if (vertex == K) {
				cout << count;
				return 0;
			}
			if (vertex + 1 < 1000001 && !visited[vertex + 1]) {
				visited[vertex + 1] = 1;
				que.push(vertex + 1);
			}
			if (vertex * 2 < 1000001 && !visited[vertex * 2]) {
				visited[vertex * 2] = 1;
				que.push(vertex * 2);
			}
		}
		count++;
	}
	return 0;
}
*/