// C++ program for different tree traversals
#include <iostream>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct Node
{
	int data;
	struct Node *left, *right;
};

// Utility function to create a new tree node
Node *newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

/* Given a binary tree, print its nodes according to the "bottom-up" postorder traversal. */
void Postorder(struct Node *node)
{
	if (node == NULL)
		return;

	// first recur on left subtree
	Postorder(node->left);

	// then recur on right subtree
	Postorder(node->right);

	// now deal with the node
	cout << node->data << " ";
}

/* Given a binary tree, print its nodes in inorder*/
void Inorder(struct Node *node)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	Inorder(node->left);

	/* then print the data of node */
	cout << node->data << " ";

	/* now recur on right child */
	Inorder(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void Preorder(struct Node *node)
{
	if (node == NULL)
		return;

	/* first print data of node */
	cout << node->data << " ";

	/* then recur on left subtree */
	Preorder(node->left);

	/* now recur on right subtree */
	Preorder(node->right);
}

/* Driver program to test above functions*/
int main()
{
	struct Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "\nPreorder traversal of binary tree is \n";
	Preorder(root);

	cout << "\nInorder traversal of binary tree is \n";
	Inorder(root);

	cout << "\nPostorder traversal of binary tree is \n";
	Postorder(root);

	return 0;
}
