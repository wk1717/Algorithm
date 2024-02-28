/*
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int user1[10001] = {0, };
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		user1[temp]++;
	}
	
	for (int k = 1; k < 10001; k++) {
		if (user1[k]) {
			for (int j = 0; j < user1[k]; j++)
				cout << k << '\n';
		}
	}
	return 0;

}
*/