#include <iostream>
#include <vector>
using namespace std;

int main() {
	int input[50][50];
	int N, M;
	
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> input[i][j];
		}
	}
}