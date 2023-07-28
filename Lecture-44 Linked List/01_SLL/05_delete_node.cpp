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
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free of node with data with value " << value << endl;
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
void delete_Node(int position, Node *&head)
{
    // Deleting first node
    if (position == 1)
    {
        // Memory free of starting node
        Node *temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    // Deleting any other node
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
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
    delete_Node(4, head);
    print(head);
    cout<<"Head is:"<<head->data<<" and tail is:"<<tail->data;
    return 0;
}