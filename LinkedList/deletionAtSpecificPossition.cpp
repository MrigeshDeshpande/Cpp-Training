#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    { // constructor
        head = NULL;
    }
    void insert(int data);
    void display();
    void deleteNode(int data);
    int calcSize();
    void deletepos(int pos);
};

void LinkedList::insert(int data)
{

    Node *new_node = new Node();

    new_node->data = data;
    new_node->next = head;
    head = new_node;
}
int LinkedList::calcSize()
{
    int size = 0;

    Node *node = head;

    while (node != NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}

void LinkedList::deletepos(int pos)
{
    Node *temp = head;
    Node *previous;

    int size = calcSize();

    if (pos < 1 || pos > size)
    {
        printf("Enter valid position\n");

        return;
    }

    // if the head node itself needs to be deleted
    if (pos == 1)
    {
        // changing head to next in the list
        head = temp->next;
        cout << "Deleted Item: " << temp->data << endl;
        free(temp);
        return;
    }

    // run until we find the value to be deleted in the list
    while (--pos)
    {
        // store previous link node as we need to change its next val
        previous = temp;
        temp = temp->next;
    }

    // (pos-1)th node's next assigned to (pos+1)nth node
    previous->next = temp->next;
    cout << "Deleted Item: " << temp->data << endl;

    free(temp);
}

void LinkedList::display()
{

    Node *node = new Node();
    node = head;

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
    LinkedList *list = new LinkedList();
    list->insert(1);
    list->insert(2);
    list->insert(3);
    list->insert(4);
    list->insert(5);
    list->insert(6);

    list->display();

    list->deletepos(1);
    list->display();

    list->deletepos(3);
    list->display();

    list->deletepos(4);
    list->display();

    list->deletepos(-2); // not valid as pos negative
    list->deletepos(10); // not valid as breaches size of Linked List

    return 0;
}