// using struct

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void insertFront(struct Node **head, int data)
{

    // dynamically create memory for this newNode
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    // assign data value
    newNode->data = data;
    // change the next node of this newNode
    // to current head of Linked List
    newNode->next = *head;

    // re-assign head to this newNode
    *head = newNode;
}

//

void display(struct Node *node)
{
    cout << "\n\n";
    // as linked list will end when Node is Null

    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n"
         << endl;
}
int main()
{
    struct Node *head = NULL;

    // Need '&' i.e. address as we need to change head
    insertFront(&head, 6);
    insertFront(&head, 12);
    insertFront(&head, 18);
    insertFront(&head, 24);
    insertFront(&head, 30);

    // No '&' as head is not changed
    display(head);
    return 0;
}