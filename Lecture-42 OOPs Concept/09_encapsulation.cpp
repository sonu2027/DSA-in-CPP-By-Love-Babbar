#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age=10;
    int height;

public:
    int get_age()
    {
        return this->age;
    }
};
int main()
{
    student s1;
    cout << s1.get_age();
    return 0;
}