#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "Destructor is called" << endl;
    }
};

void insertNode(Node *&head, int data, int key)
{
    if (head == NULL)
    {
        Node *temp1 = new Node(data);
        temp1->next = temp1;
        head = temp1;
        return;
    }
    Node *temp2 = head;
    while (temp2->data != key)
    {
        temp2 = temp2->next;
    }
    Node *nodeTOinsert = new Node(data);
    nodeTOinsert->next = temp2->next;
    temp2->next = nodeTOinsert;
}

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int len(Node *&head)
{
    if (head == NULL)
        return 0;

    Node *temp = head;
    int count = 1;
    while (temp->next != head)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void deleteNode(Node *&head, int key)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next==head)
    {
        Node *temp=head;
        temp->next=NULL;
        head=NULL;
        delete temp;
        return;
    }
    
    Node *temp = head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    Node *temp2 = temp->next;
    if(temp2==head)
    head=temp2->next;
    temp->next = temp2->next;
    temp2->next = NULL;
    delete temp2;
}

int main()
{
    Node *head = NULL;
    cout << "Length of linked list is:" << len(head) << endl;
    insertNode(head, 10, 5);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertNode(head, 13, 10);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertNode(head, 15, 10);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    cout << "Data of head is:" << head->data << endl;
    deleteNode(head, 13);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    deleteNode(head, 10);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    deleteNode(head, 15);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    return 0;
}