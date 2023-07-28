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
void print(Node *&head)
{
    Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertATposition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAThead(head, d);
        return;
    }
    Node *temp = head;
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

    Node *nodeTOinsert = new Node(d);
    nodeTOinsert->next = temp->next;
    temp->next = nodeTOinsert;
}
int main()
{
    Node *node1 = new Node(18);
    Node *head = node1;
    Node *tail = node1;
    insertAThead(head, 14);
    insertAThead(head, 10);
    insertATtail(tail, 25);
    insertATtail(tail, 28);
    insertATtail(tail, 36);
    insertATposition(tail, head, 4, 23);
    print(head);
    insertATposition(tail, head, 1, 7);
    print(head);
    insertATposition(tail, head, 9, 42);
    print(head);
    return 0;
}