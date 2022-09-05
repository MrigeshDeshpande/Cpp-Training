#include <stdio.h>
#include <stdlib.h>

// PrepInsta, creating basic node structure : data, left/right node pointers
struct node
{
  int data;
  struct node *left;
  struct node *right;
};

/* This function is creating memory for new node struct
   and allocating values to data and left-right pointers */
struct node *newNode(int data)
{
  // Using malloc to create memory for new node to be created
  struct node *node = (struct node *)malloc(sizeof(struct node));

  // Assigning data
  node->data = data;

  // Here we assign left-right children nodes to NULL
  node->left = NULL;
  node->right = NULL;

  // finally returning node
  return (node);
}

int main()
{
  /*Root is created first*/
  struct node *root = newNode(1);
  /* This is how the tree looks now.....

        1
      /   \
     NULL  NULL
  */

  root->left = newNode(2);
  root->right = newNode(3);
  /* 2 and are now left and right children to root node
           1
         /   \
        2       3
     /    \    /  \
    NULL NULL NULL NULL
  */

  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);
  /* 4 and 5 becomes children of 2
            1
        /       \
       2          3
     /   \       /  \
    4    5      6  NULL
  /  \  / \    / \
NULL N N   N  N   N
*/

  printf("The tree has been created");
  printf("\nWe will understand printing later");
  printf("\nWhen we learn, traversals (inorder, postorder, preorder etc");

  return 0;
}