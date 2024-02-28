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
	Node* parent = NULL; // 한바퀴도 못도는경우대비(root가 비어있을때)
	while (p != NULL) {
		parent = p;
		if (p->key = x)
			return p;
		else if (p->key < x)
			p = p->right;
		else
			p = p->left;
	}
	//새 노드 할당(x가 노드에 없을때)
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->key = x;
	newNode->left = newNode->right = NULL;
	//parent의 자식으로 새 노드 붙이기(x붙이기)
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

	//차수가 0인경우
	if (p->left == NULL && p->right == NULL) {
		if (parent == NULL)
			root = NULL;
		else {			//루트가 아닌 노드가 삭제되는 경우
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