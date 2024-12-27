#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, cnt = 0;
	cin >> N;

	int name = 665, cname;
	while (cnt < N) {
		name++;
		cname = name;
		while (cname > 0) {
			if (cname % 1000 == 666) {
				cnt++;
				break;
			}
			else {
				cname /= 10;
			}
		}
	}
	cout << name;

	return 0;
}
