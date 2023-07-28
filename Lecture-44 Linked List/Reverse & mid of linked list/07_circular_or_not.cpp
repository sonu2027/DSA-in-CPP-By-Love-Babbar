// Linked list is circular or not
#include <iostream>
#include <map>
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
            temp = temp->next;

        Node *nodeTOinsert = new Node(data);
        nodeTOinsert->next = temp->next;
        temp->next = nodeTOinsert;
    }
}

void print(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
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
    if (tail == NULL)
        return 0;

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
    if (tail->next == tail)
    {
        tail->next = NULL;
        tail = NULL;
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
        Node *temp2 = tail;
        Node *temp = tail;

        while (temp->next != tail)
            temp = temp->next;

        temp->next = tail->next;
        tail = tail->next;
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

bool isCircular(Node *&head)
{
    if (head == NULL)
        return true;

    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        visited[temp] = true;
        temp = temp->next;
        if (visited[temp] == true)
        {
            cout << "First element of circular list is:" << temp->data << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 4, 8);
    Node *head = tail;
    insertNode(tail, 8, 15);
    insertNode(tail, 8, 17);
    insertNode(tail, 17, 25);
    insertNode(tail, 15, 20);
    print(tail);
    cout << "Length of linked list is:" << len(tail) << endl;

    if (isCircular(head))
        cout << "Linked list is circular" << endl;
    else
        cout << "Linked list is not circular" << endl;

    return 0;
}