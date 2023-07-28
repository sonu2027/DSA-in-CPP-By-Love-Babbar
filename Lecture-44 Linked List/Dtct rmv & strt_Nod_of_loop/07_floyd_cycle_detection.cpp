// Floyd cycle detection algorithm
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

void deletion(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int count = 1;
    Node *prev = NULL;
    Node *curr = head;

    while (count < position)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    if (curr->next == NULL)
        tail = prev;

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

// Detection of loop and starting node of loop with the help of map
bool detectLoop(Node *&head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *temp = head;
    map<Node *, bool> visited;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Present on element:" << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

// Detection of loop with the help of floyd detection algorithm
Node *floydCycleDetection(Node *&head)
{
    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
            fast = fast->next;

        slow = slow->next;

        if (fast == slow)
        {
            cout << "Cycle is present at:" << fast->data << endl;
            return fast;
        }
    }
    return NULL;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAThead(head, 8);
    insertAThead(head, 3);
    insertATtail(tail, 13);
    insertATtail(tail, 1);
    insertATposition(head, tail, 1, 45);
    insertATposition(head, tail, 1, 0);
    insertATposition(head, tail, 3, 30);
    insertATposition(head, tail, 8, 80);
    insertATposition(head, tail, 10, 100);
    deletion(head, tail, 1);
    deletion(head, tail, 4);
    deletion(head, tail, 8);

    print(head);

    cout << "Length of linked list is:" << len(head) << endl;
    cout << "Head->data: " << head->data << " and head->next: " << head->next << " || tail->data: " << tail->data << " and tail->next: " << tail->next << endl;

    tail->next = head->next;

    cout << "Head->data: " << head->data << " and head->next: " << head->next << " || tail->data: " << tail->data << " and tail->next: " << tail->next << endl;

    // if (detectLoop(head))
    //     cout<<"Loop is present"<<endl;
    // else
    // cout<<"Loop is not present"<<endl;

    if (floydCycleDetection(head) == NULL)
        cout << "Cycle is not present" << endl;
    else
        cout << "Cycle is present" << endl;
        
    return 0;
}