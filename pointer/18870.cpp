/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	int N;
	int x;
	scanf("%d", &N);

	vector<int> cord_x;
	vector<int> Countvec;
	
	for (int i = 0; i < N; i++) {
		cin >> x;
		cord_x.push_back(x);
		Countvec.push_back(x);
	}

	sort(Countvec.begin(), Countvec.end()); //����
	vector<int>::iterator it = unique(Countvec.begin(), Countvec.end()); //�ߺ��ڷ�
	Countvec.erase(it, Countvec.end()); // �ڿ����� ������


	for (int i = 0; i < N; i++) {
		cout << lower_bound(Countvec.begin(), Countvec.end(), cord_x[i]) - Countvec.begin() << " ";
	}

	return 0;
}
*/