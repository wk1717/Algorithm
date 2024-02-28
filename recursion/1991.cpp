/*
#include <iostream>
using namespace std;

int N;
int arr[27][3];

void preorder(int node){
	if (node == -1)
		return;
	cout << (char)(node + 'A');
	preorder(arr[node][1]);
	preorder(arr[node][2]);
}

int main() {
	cin >> N;
	char a, b, c;
	
	for (int i = 1; i < N; i++) {
		cin >> a >> b >> c;

		arr[i][0] = (int)(a - 'A');
		if (b == '.') {
			arr[i][1] = -1;
		}
		else
			arr[i][1] = (int)(b - 'A');
		if (c == '.') {
			arr[i][2] = -1;
		}
		else
			arr[i][2] = (int)(c - 'A');
	}
	char root = 'A';
	preorder(int(root - 'A'));
}
*/
