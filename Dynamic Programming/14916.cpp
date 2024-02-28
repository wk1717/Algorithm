/*
#include <iostream>
using namespace std;

int main() {
	int n, ns, result = 0;
	cin >> n;
	ns = n;

	if (n % 5 == 0) {
		cout << n / 5;
	}
	else {
		while (n > 0) {
			n = n - 2;
			result++;
			if (n % 5 == 0) {
				result += n / 5;
				n = n % 5;
				cout << result;
				break;
			}
		}
	}
	if (n < 0) {
		cout << -1;
	}


	return 0;
}
*/
