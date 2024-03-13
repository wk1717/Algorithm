/*
#include <iostream>
#include <cstdlib>
using namespace std;

int N, M;
int Narray[100000];
int Marray[100000];

int compare(const void* a, const void* b) {
	return *(int*)a > *(int*)b ? 1 : (*(int*)a < *(int*)b ? -1 : 0);
}

int binary(int key) {
	int front = 0, rear = N - 1;
	
	while (front <= rear) {
		int mid = (front + rear) / 2;
		if (Narray[mid] == key)
			return 1;
		if (Narray[front] == key)
			return 1;
		if (Narray[rear] == key)
			return 1;
		
		if (key < Narray[mid])
			rear = mid - 1;
		else
			front = mid + 1;
	}
	return 0;
}

int main() {
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Narray[i];
	}
	
	qsort(Narray, N, sizeof(int), compare);

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> Marray[i];
	}
	for (int i = 0; i < M; i++) {
		cout << binary(Marray[i]) << "\n";
	}
	return 0;
}
*/