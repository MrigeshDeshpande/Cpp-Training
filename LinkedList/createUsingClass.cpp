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
    void insertNode(int data);
    void deleteNode();
    void display();
};

void LinkedList::insertNode(int data)
{

    Node *new_node = new Node();

    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void LinkedList::deleteNode()
{
    Node *temp = head;

    if (head == NULL)
    {
        cout << "Deletion from Empty Singly Linked Not Possible";
        return;
    }
    // move head to next node in Singly Linked List
    head = head->next;
    delete (temp); // delete the memory allocated
}

// Function to traverse
void LinkedList::display()
{
    Node *temp = new Node();
    temp = head;

    cout << "Linked List: ";
    int count = 0;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << "\nThere are " << count << " items in Linked List\n";
    cout << endl;
}

int main()
{

    LinkedList *list = new LinkedList();
    // -> used with pointer objects
    // Need '&' i.e. address as we need to change head

    list->insertNode(50);
    list->insertNode(40);
    list->insertNode(30);
    list->insertNode(20);
    list->insertNode(10);

    // No '&' as head is not changed
    list->display();
    list->deleteNode();
    list->deleteNode();
    list->deleteNode();
    list->display();
    return 0;
}