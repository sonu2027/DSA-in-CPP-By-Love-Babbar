#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d; //Declaration of dequue

    d.push_back(6); //Inserting element 6 at end of an array
    d.push_front(8); //Inserting element 8 at front of an array
    d.push_back(0); 
    d.push_back(9); 
    d.push_front(5);


    cout<<"The array elements are: ";
    for (int i:d )
    {
        cout<<i<<" ";
    }
    cout<<endl;

    
    cout << endl << "Size of an deque is: " << d.size() << endl;
    cout << "Element at 2nd index: " << d.at(2) << endl;
    cout << "deque is empty or not: " << d.empty() << endl;
    cout << "Front element of an deque will be: " << d.front() << endl;
    cout << "Back element of an deque will be: " << d.back() << endl<<endl;


    cout<<"After pop the last element of an array, the array will be: ";
    d.pop_back(); // Deleting the last element of an array
    for (int i:d )
    {
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"After pop the front element of an array, the array will be: ";
    d.pop_front(); // Inserting element at front of the array
    for (int i:d )
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    
    cout << "Before erase, size of an deque is: " << d.size() << endl;
    //Erasing element from index 0 t0 1
    d.erase(d.begin(),d.begin()+2);
    cout<<"After erasing, the deque will be: ";
    for (int i:d )
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout << "After erase, size of an deque is: " << d.size() << endl;


    return 0;
}