/*
* struct
* 
#include <iostream>
using namespace std;

struct Student {
	int kg;
	int cm;
	int rank;
};

int main() {
	int N;

	Student list[50];

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> list[i].kg >> list[i].cm;
	}
	for (int j = 0; j < N; j++) {
		int k = 0;
		for (int i = 0; i < N; i++) {
			if (list[j].cm < list[i].cm && list[j].kg < list[i].kg) {
				k++;
			}
		}
		list[j].rank = k + 1;
	}
	for (int i = 0; i < N; i++) {
		cout << list[i].rank << " ";
	}
	return 0;
}
*/