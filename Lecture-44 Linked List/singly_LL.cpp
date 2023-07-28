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
    }
};

void insertAThead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
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
    if (head == NULL)
        return 0;

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertATtail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertATposition(Node *&head, Node *&tail, int data, int pos){
    if(pos==1){
        insertAThead(head, data);
        return;
    }
    int start=1;
    Node *prev=NULL;
    Node *curr=head;
    while (start<pos)
    {
        prev=curr;
        curr=curr->next;
        start++;
    }
    if(curr==NULL){
        insertATtail(tail, data);
        return;
    }
    Node *temp=new Node(data);
    prev->next=temp;
    temp->next=curr;
}

void deleteNode(Node *&head, Node *&tail, int pos){
    int start=1;
    Node *prev=NULL;
    Node *curr=head;
    if (pos==1)
    {
        head=curr->next;
        curr->next==NULL;
        delete curr;
        return;
    }
    
    while (start<pos)
    {
        prev=curr;
        curr=curr->next;
        start++;
    }
    if (curr->next==NULL)
    {
        tail=prev;
    }
    
    prev->next=curr->next;
    curr->next==NULL;
    delete curr;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAThead(head, 8);
    insertAThead(head, 6);
    print(head);
    cout << "length of linkled list is:" << len(head)<<endl;
    insertATtail(tail, 13);
    insertATtail(tail, 16);
    print(head);
    cout << "length of linkled list is:" << len(head)<<endl;
    insertATposition(head, tail, 9, 3);
    print(head);
    cout << "length of linkled list is:" << len(head)<<endl;
    insertATposition(head, tail, 4, 1);
    insertATposition(head, tail, 3, 1);
    print(head);
    cout << "length of linkled list is:" << len(head)<<endl;
    insertATposition(head, tail, 18, 8);
    insertATposition(head, tail, 20, 10);
    print(head);
    cout << "length of linkled list is:" << len(head)<<endl;
    deleteNode(head, tail, 5);
    print(head);
    cout << "length of linkled list is:" << len(head)<<endl;
    deleteNode(head, tail, 1);
    print(head);
    cout << "length of linkled list is:" << len(head)<<endl;
    deleteNode(head, tail, 8);
    print(head);
    cout << "length of linkled list is:" << len(head)<<endl;
    return 0;
}