#include <iostream>
using namespace std;
class A
{
    int health;
    int level;

public:
    static int timeTOcomplete;
    // static member function can only access static data member
    static int random()
    {
        return timeTOcomplete;
    }
};
int A::timeTOcomplete = 100;
int main()
{
    // we doesn't need to create any object to access static keyword type var
    cout << A::timeTOcomplete << endl;
    cout << A::random() << endl;
    return 0;
}