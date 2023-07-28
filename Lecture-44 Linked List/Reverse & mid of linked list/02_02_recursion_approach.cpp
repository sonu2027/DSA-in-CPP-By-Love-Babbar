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
Node *rev(Node *&p, Node *&c, Node *&f)
{
    if (c == NULL)
    {
        return p;
    }
    f = c->next;
    c->next = p;
    p = c;
    c = f;
    return rev(p, c, f);
}
Node *reverse(Node *head)
{
    Node *f = NULL;
    Node *p = NULL;
    Node *c = head;
    head = rev(p, c, f);
    return head;
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
    insertATposition(head, tail, 10, 100);

    cout << "Element of linled list are" << endl;
    print(head);

    cout << "Reverse of linked list is" << endl;
    Node *r = reverse(head);
    print(r);
    return 0;
}