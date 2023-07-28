#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int size;
    int peak;

public:
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        peak = -1;
    }
    void push(int element)
    {
        if (size - peak > 1)
        {
            peak++;
            arr[peak] = element;
        }
        else
        {
            cout << "stack is overflow" << endl;
        }
    }
    void pop()
    {
        if(peak>=0){
            peak--;
        }
        else{
            cout<<"stack is underflow"<<endl;
        }
    }
    int top()
    {
        if(peak>=0){
            return arr[peak];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    int empty()
    {
        if(peak==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    stack s(5);
    s.push(8);
    s.push(13);
    s.push(3);
    s.push(1);
    s.push(67);
    s.push(5);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.top();
    return 0;
}