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

void insertNode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *nodeTOinsert = new Node(data);
        nodeTOinsert->next = nodeTOinsert;
        tail = nodeTOinsert;
    }
    else
    {
        Node *temp = tail;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        Node *nodeTOinsert = new Node(data);
        nodeTOinsert->next = temp->next;
        temp->next = nodeTOinsert;
    }
}

void print(Node *&tail)
{   
    if (tail==NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}
int len(Node *&tail)
{
    if (tail==NULL)
    {
        return 0;
    }
    int count = 1;
    Node *temp = tail;
    while (temp->next != tail)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
void deletion(Node *&tail, int d)
{
    if (tail->next==tail)
    {
        tail->next=NULL;
        tail=NULL;
        delete tail;
        return;
    }
    
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    else if (tail->data == d)
    {
        Node *temp2=tail;
        Node *temp = tail;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = tail->next;
        tail=tail->next;
        temp2->next = NULL;
        delete temp2;
    }
    else
    {
        Node *temp = tail;
        Node *prev = NULL;
        Node *curr = tail;
        while (curr->data != d)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 4, 8);
    print(tail);
    cout << "Length of linked list is:" << len(tail) << endl;
    // deletion(tail, 8);
    // print(tail);
    // cout << "Length of linked list is:" << len(tail) << endl;
    insertNode(tail, 8, 15);
    print(tail);
    cout << "Length of linked list is:" << len(tail) << endl;
    insertNode(tail, 8, 17);
    print(tail);
    cout << "Length of linked list is:" << len(tail) << endl;
    insertNode(tail, 17, 25);
    print(tail);
    cout << "Length of linked list is:" << len(tail) << endl;
    insertNode(tail, 15, 20);
    print(tail);
    cout << "Length of linked list is:" << len(tail) << endl;
    cout << "Deletion started" << endl;
    deletion(tail, 15);
    print(tail);
    cout << "Length of linked list is:" << len(tail) << endl;
    deletion(tail, 20);
    print(tail);
    cout << "Length of linked list is:" << len(tail) << endl;
    deletion(tail, 8);
    print(tail);
    cout << "Length of linked list is:" << len(tail) << endl;
    deletion(tail, 25);
    print(tail);
    cout << "Length of linked list is:" << len(tail) << endl;
    return 0;
}