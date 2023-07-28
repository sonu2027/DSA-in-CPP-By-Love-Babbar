#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
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

void insertATposition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAThead(head, d);
        return;
    }
    int count = 1;
    Node *temp = head;
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

void deletion(Node *&head, int position){
    if (position==1)
    {
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }
    else{
    int count=1;
    Node *prev=NULL;
    Node *curr=head;
    while (count<position)
    {
        prev=curr;
        curr=curr->next;
        count++;
    }
    prev->next=curr->next;
    curr->prev=NULL;
    curr->next=NULL;
    delete curr;
    }
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
    insertAThead(head, 5);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATtail(tail, 12);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATtail(tail, 17);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 1, 9);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 1, 1);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 8, 80);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 9, 90);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 7, 70);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    insertATposition(head, tail, 3, 30);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    deletion(head, 1);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    deletion(head, 1);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    cout<<"deletion started at any point except 1"<<endl;
    deletion(head, 4);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    deletion(head, 4);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    deletion(head, 7);
    print(head);
    cout << "Length of linked list is:" << len(head) << endl;
    return 0;
}