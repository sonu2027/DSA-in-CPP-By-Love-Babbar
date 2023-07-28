#include <iostream>
using namespace std;
class father
{
public:
    int height = 30;
    int weight = 100;

public:
    void get_height()
    {
        cout << "Height is" << endl;
    }
    void get_weight()
    {
        cout << "Weight is" << endl;
    }
};
class son : public father
{
};
class daughter : public father
{
};
int main()
{
    son s1;
    daughter d1;
    cout << s1.height << endl;
    cout << s1.weight << endl;
    cout << d1.height << endl;
    cout << d1.weight << endl;
    return 0;
}