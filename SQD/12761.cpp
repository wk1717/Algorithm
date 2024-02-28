/*
#include <iostream>
#include <queue>
using namespace std;

int N, M, A, B;
int visited[100000];
int vertex;
int arr[100][100];

void BFS() {
	int j = 0, l = 0;
	int next[100];
	int check[100] = { 0, };
	int count = 0;
	int move[8] = { 1, -1, A, B, -A, -B, A, B };
	queue <int> q1;
	visited[N] = 1;
	vertex = N;
	int k;
	do {
		if (vertex == M) {
			cout << count;
			return;
		}
		
		for (int i = 0; i < 6; i++) {
			if (vertex + move[i] >= 0) {
				if (visited[vertex + move[i]] == 0)
					next[j++] = vertex + move[i];
			}
		}
		for (int i = 6; i < 8; i++) {
			if (vertex * move[i] >= 0) {
				if (visited[vertex * move[i]] == 0)
					next[j++] = vertex * move[i];
			}
		}
		for (k = 0; k < j; k++) {
			if (visited[next[k]] == 0) {
				visited[next[k]] = 1;
				q1.push(next[k]);
			}
		}
		q1.push(-1);
		if (q1.front() == -1) {
			count++;
			q1.pop();
		}
		vertex = q1.front();
		q1.pop();
		
		
		
	} while (!q1.empty());



}

int main() {
	cin >> A >> B >> N >> M;
	BFS();


	return 0;
}
*/