#include <iostream>
#include <array>
using namespace std;
int main()
{
    // Initialization of an array
    array<int, 5> arr = {3, 1, 6, 7, 4};
    // arr.size():Size of array
    cout<<"Elements of an array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    // arr.size(): Size of the array
    cout << endl << "Size of an array is: " << arr.size() << endl;
    // arr.at(2): Elements of array at index 2
    cout << "Element at 2nd index: " << arr.at(2) << endl;
    // arr.empty(): For checking that array is empty or not
    cout << "Array is empty or not: " << arr.empty() << endl;
    // arr.front():We can access front element of an array
    cout << "Front element of an array will be: " << arr.front() << endl;
    // arr.back():We can access last element of the array
    cout << "Back element of an array will be: " << arr.back() << endl;
    return 0;
}