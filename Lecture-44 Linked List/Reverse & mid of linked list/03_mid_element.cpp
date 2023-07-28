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

int mid(Node *&head, int &length)
{
    int count = 1;
    Node *temp = head;
    while (count < length)
    {
        temp = temp->next;
        count++;
    }
    return temp->data;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAThead(head, 8);
    insertAThead(head, 3);
    insertATtail(tail, 13);
    insertATtail(tail, 15);
    insertATposition(head, tail, 1, 45);
    insertATposition(head, tail, 1, 0);
    insertATposition(head, tail, 3, 30);
    insertATposition(head, tail, 8, 80);
    // insertATposition(head, tail, 10, 100);

    print(head);
    int length = len(head);
    cout << "Length of linked list is:" << length << endl;
    length = length / 2 + 1;
    cout << "Mid element of link list is:" << mid(head, length);
    return 0;
}