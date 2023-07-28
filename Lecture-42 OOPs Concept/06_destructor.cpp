#include <iostream>
using namespace std;
class hero
{
public:
    hero()
    {
        cout << "Constructor is called " << endl;
    }
    ~hero()
    {
        cout << "Destructor is called" << endl;
    }
};
int main()
{
    // created statically
    hero h1;
    // created dynamically
    hero *h2 = new hero;
    hero *h3 = new hero;
    // For dynamically allocated object we have to call destructor manually
    // Destructor is calling for h2
    delete h2;
    // destructor is calling for h3
    delete h3;
    return 0;
}