#include <iostream>
using namespace std;
void update(int **pptr)
{
    // kuch change hoga- no
    // pptr = pptr + 1;

    // kuch change hoga- yes
    //*pptr = *pptr + 1;

    // kuch change hoga- yes
    **pptr = **pptr + 1;
}
int main()
{
    int num = 9;
    int *ptr = &num;
    int **pptr = &ptr;
    cout << "Before updation " << endl;
    cout << num << endl;
    cout << ptr << endl;
    cout << pptr << endl
         << endl;
    update(pptr);
    cout << "After updation " << endl;
    cout << num << endl;
    cout << ptr << endl;
    cout << pptr << endl;
    return 0;
}