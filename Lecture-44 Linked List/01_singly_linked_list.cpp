#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
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

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int len(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAThead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertATtail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertATposition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAThead(head, d);
        return;
    }
    Node *temp = head;
    Node *nodeTOinsert = new Node(d);
    int count = 1;
    while (count < (position - 1))
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertATtail(tail, d);
        return;
    }
    nodeTOinsert->next = temp->next;
    temp->next = nodeTOinsert;
}

void deletion(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int count = 1;
    Node *prev = NULL;
    Node *curr = head;
    while (count < position)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if (curr->next==NULL)
    {
        tail=prev;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertAThead(head, 8);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertAThead(head, 3);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATtail(tail, 13);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATtail(tail, 15);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 1, 45);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 1, 0);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 3, 30);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 8, 80);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 10, 100);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    deletion(head,tail, 1);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    deletion(head,tail, 4);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    deletion(head,tail, 8);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    return 0;
}