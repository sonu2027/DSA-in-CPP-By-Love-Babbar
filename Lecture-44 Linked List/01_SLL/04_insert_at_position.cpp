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
void insertATposition(Node *&tail, Node *&head, int position, int d)
{
    // Insert at head
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
    // Inserting at last position
    if (temp->next == NULL)
    {
        insertATtail(tail, d);
        return;
    }
    // creating a new Node for d
    Node *nodeTOinsert = new Node(d);
    nodeTOinsert->next = temp->next;
    temp->next = nodeTOinsert;
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
int main()
{
    Node *node1 = new Node(10);
    Node *tail = node1;
    Node *head = node1;
    insertATtail(tail, 20);
    insertATtail(tail, 30);
    insertATtail(tail, 40);
    insertATposition(tail, head, 3, 48);
    insertATposition(tail, head, 1, 58);
    insertATposition(tail, head, 7, 65);
    print(head);
    return 0;
}