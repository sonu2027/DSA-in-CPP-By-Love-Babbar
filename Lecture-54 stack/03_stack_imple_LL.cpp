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
        // cout<<"Destructor is called"<<endl;
    }
};

void insertAThead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

class stack
{
public:
    int size;
    Node *head = NULL;

public:
    stack(int size)
    {
        this->size = size;
    }

    void push(int data)
    {
        if (size > 0)
        {
            size--;
            insertAThead(head, data);
        }
        else
        {
            cout << "stack is overflow" << endl;
        }
    }

    int top()
    {
        if (head != NULL)
            return head->data;
        else
            return false;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "stack is underflow" << endl;
        }
        else
        {
            size++;
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }

    bool full()
    {
        if (size == 0)
            return true;
        else
            return false;
    }
    
};

int main()
{
    stack s(5);

    if (s.empty())
        cout << "Empty" << endl;
    else
        cout << "Not empty" << endl;

    if (s.full())
        cout << "Full" << endl;
    else
        cout << "Not full" << endl;

    s.pop();
    cout << s.top() << endl;

    s.push(1);
    cout << s.top() << endl;
    s.push(2);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<s.top()<<endl;
    if (s.empty())
        cout << "Empty" << endl;
    else
        cout << "Not empty" << endl;

    if (s.full())
        cout << "Full" << endl;
    else
        cout << "Not full" << endl;

    return 0;
}