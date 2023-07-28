#include <iostream>
#include "insaan.cpp"
using namespace std;
class insaan
{
    // properties of hero
private:
    int age = 20;

public:
    int height;
    int weight=100;
    // Behaviour
    int get_age()
    {
        return age;
    }
    void set_age(int a)
    {
        age = a;
    }
};
int main()
{
    // creation of object
    insaan sonu, bipin;
    cout << "Size of object sonu is: " << sizeof(sonu) << endl;
    cout << "Size of object bipin is: " << sizeof(bipin) << endl;
    sonu.weight = 55;
    cout << "Weight of sonu is: " << sonu.weight << endl;
    cout << "Age of sonu is: " << sonu.get_age() << endl;
    sonu.set_age(30);
    cout << "Age of sonu is: " << sonu.get_age() << endl;
    // Dynamically
    insaan *kumkum = new insaan;
    cout << "Size of object kumkum is: " << sizeof(*kumkum) << endl;
    cout << "Weight of kumkum is: " << (*kumkum).weight << endl;
    cout << "Weight of kumkum is: " << kumkum->weight << endl;
    delete kumkum;
    cout << "Size of object kumkum is: " << sizeof(*kumkum) << endl;
    return 0;
}