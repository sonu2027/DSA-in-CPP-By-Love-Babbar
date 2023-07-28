#include <iostream>
using namespace std;
class queue
{
public:
    int *arr;
    int size;
    int FRONT;
    int REAR;

public:
    queue(int size)
    {
        this->size = size;
        arr = new int[size];
        FRONT = 0;
        REAR =0;
    }
    void push(int element)
    {
        if (REAR < size)
        {
            arr[REAR] = element;
            REAR++;
        }
        else
        {
            cout << "Queue is overflow" << endl;
        }
    }
    int front()
    {
        if (REAR > 0 && FRONT <size)
        {
            return arr[FRONT];
        }
        else{
            cout<<"Que is empty"<<endl;
            return -1;
        }
    }
    void pop()
    {
        if (REAR>=0 && FRONT<size)
        {
            FRONT++;
        }
        else{
            cout<<"Que is underflow"<<endl;
        }
    }
    int empty()
    {
        if (REAR==0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main()
{
    queue q(2);
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    // q.pop();
    // q.pop();
    // cout<<q.front()<<" ";
    return 0;
}