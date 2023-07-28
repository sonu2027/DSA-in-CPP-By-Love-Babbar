#include <iostream>
using namespace std;
class father
{
public:
    int height = 10;

public:
    void get_height()
    {
        cout << "Height is" << endl;
    }
};
class mother
{
public:
    int weight = 100;

public:
    void get_weight()
    {
        cout << "weight is" << endl;
    }
};
//Multiple inheritance
class son : public father, public mother
{
};
int main()
{
    son s1;
    cout << s1.height << endl;
    cout << s1.weight << endl;
    s1.get_weight();
    s1.get_height();
    return 0;
}