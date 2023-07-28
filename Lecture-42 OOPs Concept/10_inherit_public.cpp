#include <iostream>
using namespace std;
class human
{
public:
    int age;
    int height;
    int weight;

public:
    int get_age()
    {
        return this->age;
    }
    void set_weight(int w)
    {
        this->weight = w;
    }
};
class male : public human
{
public:
    string colour;
    void sleep()
    {
        cout << "Male sleeping is:" << endl;
    }
};
int main()
{
    male m1;
    cout << m1.age << endl;
    cout << m1.weight << endl;
    cout << m1.height << endl;
    cout << m1.colour << endl;
    m1.sleep();
    m1.set_weight(55);
    cout<<m1.weight;
    return 0;
}
