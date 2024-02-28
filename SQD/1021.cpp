/*
#include <iostream>
#include <list>
using namespace std;
typedef string Data;
int N, M;

class Node {
	Data data;
	Node* next;
	Node(Data d = "", Node* n = NULL) {
		data = d; 
		next = n; // constructor
	}
	friend class Circular;
};

class Circular {
	Node* head;
public:
	Circular() { head = NULL; }
	void Insert(Data d) {
		if (head == NULL) {
			head = new Node(d);
			head->next = head;
		}
		else {
			Node* p = head;
		}
	}
};

int main() {
	cin >> N >> M;
}
*/