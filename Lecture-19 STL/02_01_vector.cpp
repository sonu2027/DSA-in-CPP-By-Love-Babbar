#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main()
{
    //Declaration of vector
    vector<int> v;

    //v.size(): How many elements are there in a vector
    //v.capacity(): How many space are there for the elements
    cout << "Size of vector: " << v.size() << endl;
    cout << "capacity of vector: " << v.capacity() << endl
         << endl;

    //v.push_back(2):We can insert elements in the end of an vector, here element 2 is inserted
    v.push_back(2);
    cout << "Size of vector: " << v.size() << endl;
    cout << "capacity of vector: " << v.capacity() << endl
         << endl;

    v.push_back(5);
    cout << "Size of vector: " << v.size() << endl;
    cout << "capacity of vector: " << v.capacity() << endl
         << endl;

    v.push_back(15);
    cout << "Size of vector: " << v.size() << endl;
    cout << "capacity of vector: " << v.capacity() << endl
         << endl;

    v.push_back(60);
    cout << "Size of vector: " << v.size() << endl;
    cout << "capacity of vector: " << v.capacity() << endl
         << endl;

    v.push_back(34);
    cout << "Size of vector: " << v.size() << endl;
    cout << "capacity of vector: " << v.capacity() << endl
         << endl;


    cout<<"Elements of the array is: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl<<endl;

    cout << "Element at 2nd index " << v.at(2) << endl;
    cout << "Array is empty or not " << v.empty() << endl;
    cout << "Front element of an array will be " << v.front() << endl;
    cout << "Back element of an array will be " << v.back() << endl<<endl;

    //v.pop_back():We can delete elements in the end of an vector, here last element of an array is deleted
    cout << "Elements of an array after pop " << endl;
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl<<endl;

    //popping does not affect the capacity of vector but it will affect the size
    cout << "capacity of vector after popping: " << v.capacity() << endl<<endl;

    cout << "Before clearing the size of vector " << v.size() << endl;
    //v.clear(): We  can clear the all elements of an array and size will be 0 but  Capacaity does not affect and it will remain same
    v.clear();
    cout << "After clearing the size of vector " << v.size() << endl;
    cout << "After clearing the capacity of vector " << v.capacity() << endl<<endl;

    //Another way of initializing a vector
    vector<int> v1(5, 2);//The size of vector is 5 and all space initialized with 2
    cout<<"Vector v1 is: ";
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"Here we are copying the vector v1 in v2: ";
    vector<int> v2(v1);
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;


    //Concept of string
    vector<string> str;
    str.push_back("sonu");
    str.push_back("bipin");
    str.push_back("kumkum");
    for (int i = 0; i < str.size(); i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for (string i:str)
    {
        cout<<i<<" ";
    }
    
    return 0;
}