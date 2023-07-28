#include <iostream>
#include "insaan.cpp"
using namespace std;
class insaan
{
    // properties of insaan
private:
    int age = 20;

public:
    int height;
    int weight=100;
    // Behaviour of insaan
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
    // creation of object Dynamically
    insaan *kumkum = new insaan;
    cout << "Weight of kumkum is: " << (*kumkum).weight << endl;
    cout << "Weight of kumkum is: " << kumkum->weight << endl;
    cout << "age of kumkum is: " << (*kumkum).get_age() << endl;
    cout << "Age of kumkum is: " << kumkum->get_age() << endl;
    return 0;
}