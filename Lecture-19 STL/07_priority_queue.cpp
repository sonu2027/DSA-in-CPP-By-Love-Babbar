#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // Default priority queue will be max heap
    priority_queue<int> max_heap;
    max_heap.push(3);
    max_heap.push(8);
    max_heap.push(5);
    max_heap.push(9);
    cout<<"OUTPUT:"<<endl;
    cout <<endl<< "size of priority_queue(max_heap), after pushing element:" << max_heap.size() << endl;
    int n1 = max_heap.size();
    cout << "max heap is: ";
    for (int i = 0; i < n1; i++)
    {
        cout << max_heap.top() << " ";
        max_heap.pop();
    }cout << endl;
    cout << "size of priority_queue(max_heap), after popping element:" << max_heap.size() << endl<< endl;

    //Creating undefault priority queue(min heap), which is not default
    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.push(3);
    min_heap.push(8);
    min_heap.push(5);
    min_heap.push(9);
    cout << "size of priority_queue(min_heap), after pushing element:" << max_heap.size() << endl;
    int n2 = min_heap.size();
    cout << "Min heap is: ";
    for (int i = 0; i < n2; i++)
    {
        cout << min_heap.top() << " ";
        min_heap.pop();
    }cout << endl;
    cout << "size of priority_queue(min_heap), after popping element:" << max_heap.size() << endl<< endl;

    cout<<"EEECUTION ENDED"<<endl;
    return 0;
}