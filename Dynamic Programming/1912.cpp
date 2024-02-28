/*
#include <iostream>
using namespace std;

int dp[100000];
int res;

int main() {

	int n;
	cin >> n;
	
	int temp;
	cin >> temp;
	res = temp;
	dp[0] = temp;
	for (int i = 1; i < n; i++) {
		int n;
		cin >> n;
		dp[i] = max(n, dp[i-1] + n);
		res = max(res, dp[i]);
	}

	cout << res;

	return 0;
}
*/