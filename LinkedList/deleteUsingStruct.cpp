#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insert(Node **head, int data)
{

    Node *new_node = new Node();

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}
void deleteNode(Node **head, int delVal)
{
    Node *temp = *head;
    Node *previous;

    if (temp == NULL)
    {
        cout << "Can't delete Linked List empty" << endl;
        return;
    }

    // Case when there is only 1 node in the list
    if (temp->next == NULL)
    {
        *head = NULL;
        free(temp);
        cout << "Deleted: " << delVal << endl;
        return;
    } // if the head node itself needs to be deleted
    if (temp->data == delVal)
    {
        *head = temp->next; // changing head to next in the list
        cout << "Deleted: " << temp->data << endl;
        free(temp);
        return;
    }

    // traverse until we find the value to be deleted or LL ends
    while (temp != NULL && temp->data != delVal)
    {
        // store previous link node as we need to change its next val
        previous = temp;
        temp = temp->next;
    }

    // if value is not present then
    // temp will have traversed to last node NULL
    if (temp == NULL)
    {
        cout << "Value not found" << endl;
        return;
    }

    // for node to be deleted : temp lets call it nth node
    // assign (n-1)th node's next to (n+1)th node
    previous->next = temp->next;
    free(temp);
    cout << "Deleted: " << delVal << endl;
}
void display(Node *node)
{

    cout << "\nLinked List : ";

    // as linked list will end when Node is Null
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    insert(&head, 6);

    display(head);

    deleteNode(&head, 4);
    display(head);

    deleteNode(&head, 10);
    deleteNode(&head, 1);
    deleteNode(&head, 5);
    deleteNode(&head, 6);
    display(head);

    return 0;
}