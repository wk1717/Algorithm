/*
#include <iostream>
#include <vector>
using namespace std;

int root = 0;
int N;
vector <char> Data;
vector <pair<int, int>> LR;

void Preorder(int n) {
	cout.tie(0);
	if (n == -1)
		return;
	cout << Data[n];
	Preorder(LR[n].first);
	Preorder(LR[n].second);
}

void Inorder(int n) {
	cout.tie(0);
	if (n == -1)
		return;
	Inorder(LR[n].first);
	cout << Data[n];
	Inorder(LR[n].second);
}

void Postorder(int n) {
	cout.tie(0);
	if (n == -1)
		return;
	Postorder(LR[n].first);
	Postorder(LR[n].second);
	cout << Data[n];
}

int main() {
	cin.tie(0);
	cout.tie(0);
	
	cin >> N;
	LR.resize(N, { -1, -1 });
	
	for (char i = 'A'; i < N + 'A'; i++) {
		Data.push_back(i);
	}
	for (int i = 0; i < N; i++) {
		char root, left, right;
		cin >> root >> left >> right;
		int s = root - 'A';
		LR[s].first = (left == '.') ? -1 : left - 'A';
		LR[s].second = (right == '.') ? -1 : right - 'A';
	}
	
	Preorder(root);
	cout << '\n';
	Inorder(root);
	cout << '\n';
	Postorder(root);
	return 0;
}
*/