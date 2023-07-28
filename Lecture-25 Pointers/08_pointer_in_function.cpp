#include <iostream>
using namespace std;
void print(int *ptr)
{
    cout << "ptr before updation: " << ptr << endl;
}
void update(int *ptr)
{
    ptr = ptr + 1;
}
void update_value(int *ptr)
{
    *ptr = *ptr + 7;
}
using namespace std;
int main()
{
    int num = 6;
    int *ptr = &num;
    print(ptr);
    update(ptr);
    // ptr will be not update because ptr of main and update function is different
    cout << "ptr after updation: " << ptr << endl;
    cout << "Num before updation " << num << endl;
    update_value(ptr);
    cout << "Num after updation " << num << endl;
    return 0;
}