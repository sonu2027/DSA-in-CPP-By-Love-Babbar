#include <iostream>
using namespace std;
class hero
{
    int health;
    char level;

public:
    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    void print()
    {
        cout << "Health is: " << health << endl;
        cout << "Level is: " << level << endl;
    }
};
int main()
{
    hero sonu(70, 'c');
    cout << "About sonu" << endl;
    sonu.print();
    hero bipin(sonu);
    cout << "About bipin" << endl;
    bipin.print();
    return 0;
}