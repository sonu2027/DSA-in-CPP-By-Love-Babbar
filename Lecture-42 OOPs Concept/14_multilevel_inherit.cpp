#include <iostream>
using namespace std;
class animal
{
public:
    int age=10;
    int roll;

public:
    void marks()
    {
        cout << "marks is " << endl;
    }
};
class lion : public animal
{
};
class indian_lion : public lion{

};
int main()
{
    indian_lion l1;;
    l1.marks();
    cout<<l1.age;
    return 0;
}