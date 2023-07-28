#include <iostream>
using namespace std;
class human
{
public:
    int age=100;
    int height;
    int weight;

public:
    // int get_age()
    // {
    //     return this->age;
    // }
    void set_weight(int w)
    {
        this->weight = w;
    }
};
class male : private human
{
public:
    string colour;
    void sleep()
    {
        cout << "Male sleeping is:" << endl;
    }
    int get_age()
    {
        return this->age;
    }
};
int main()
{
    male m1;
    // Not accessible directly
    // cout<<m1.age;
    cout << m1.get_age() << endl;
    return 0;
}
