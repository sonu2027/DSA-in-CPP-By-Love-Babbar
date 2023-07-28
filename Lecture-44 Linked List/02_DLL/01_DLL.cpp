#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
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
int get_len(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
void insertAThead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertATtail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
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
    nodeTOinsert->prev = temp;
    temp->next = nodeTOinsert;
}
void deletion(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = temp->next;
        //temp->next->prev = NULL;
        head->prev=NULL;
        temp->next = NULL;
        return;
    }
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
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    insertAThead(head, 8);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    insertAThead(head, 6);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    insertATtail(tail, 15);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    insertATtail(tail, 19);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    insertATposition(tail, head, 4, 14);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    insertATposition(tail, head, 1, 1);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    insertATposition(tail, head, 7, 99);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    insertATposition(tail, head, 9, 111);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    deletion(head, 3);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    deletion(head, 1);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    deletion(head, 7);
    print(head);
    cout << "Length of linked list is:" << get_len(head) << endl;
    return 0;
}