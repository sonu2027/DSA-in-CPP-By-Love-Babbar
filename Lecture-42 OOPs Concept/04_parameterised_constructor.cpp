#include <iostream>
using namespace std;
class hero
{
    int health;
    char name;

public:
    // Parameterised constructor
    hero(int health)
    {
        cout << "Address of this is: " << this << endl;
        this->health = health;
    }
    hero(int health, char name)
    {
        cout << "Address of this is: " << this << endl;
        this->health = health;
        this->name = name;
    }
    int get_health()
    {
        return health;
    }
    char get_name()
    {
        return name;
    }
};
int main()
{
    // obj created statically
    hero ramesh(10);
    cout << "Address of ramesh is: " << &ramesh << endl;
    cout << ramesh.get_health() << endl;

    // obj created dynamically
    hero *a = new hero(20);
    cout << "Address of a is: " << a << endl;
    cout << a->get_health() << endl;

    hero sonu(100, 's');
    cout << "Address of sonu is: " << &sonu << endl;
    cout << sonu.get_health() << endl;
    cout << sonu.get_name() << endl;

    return 0;
}