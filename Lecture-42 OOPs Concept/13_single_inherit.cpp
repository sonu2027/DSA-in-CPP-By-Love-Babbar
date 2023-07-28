#include <iostream>
using namespace std;
class father
{
public:
    int age = 48;

public:
    void get_age()
    {
        cout << "age of father is " << age << endl;
    }
};
class child : public father
{
public:
    int roll_no = 38;

public:
    void get_roll_no()
    {
        cout << "Roll no of child is " << roll_no << endl;
    }
};
int main()
{
    child c1;
    c1.get_age();
    c1.get_roll_no();
    return 0;
}