/*
#include <iostream>
#include <cstdlib>
using namespace std;

typename char data;
struct Node{
	char key;
	struct Node* left;
	struct Node* right;
};

Node* searchBST(Node* root, char x) {
	Node* p = root;
	
	while (p != NULL) {
		if (p->key = x)
			return p;
		else if (p->key < x)
			p = p->right;
		else
			p = p->left;
	}
	
	return NULL;
}

Node* insertBST(Node* root, char x) {
	Node* p = root;
	Node* parent = NULL; // �ѹ����� �����°����(root�� ���������)
	while (p != NULL) {
		parent = p;
		if (p->key = x)
			return p;
		else if (p->key < x)
			p = p->right;
		else
			p = p->left;
	}
	//�� ��� �Ҵ�(x�� ��忡 ������)
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->key = x;
	newNode->left = newNode->right = NULL;
	//parent�� �ڽ����� �� ��� ���̱�(x���̱�)
	if (parent != NULL) {
		if (parent->key < newNode->key)
			parent->right = newNode;
		else
			parent->left = newNode;
	}
}

Node* deleteBST(Node* root, char x) {
	Node* p = root;
	Node* parent = NULL; 
	while (p != NULL && p->key != x) {
		parent = p;
		if (p->key = x)
			return p;
		else if (p->key < x)
			p = p->right;
		else
			p = p->left;
	}
	if (p == NULL)
		return root;

	//������ 0�ΰ��
	if (p->left == NULL && p->right == NULL) {
		if (parent == NULL)
			root = NULL;
		else {			//��Ʈ�� �ƴ� ��尡 �����Ǵ� ���
			if (parent->left == p)
				parent->left == NULL;
			else
				parent->right == NULL;
		}
	}

	free(p);
}
int main() {

	return 0;
}
*/