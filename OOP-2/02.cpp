#include<iostream>
using namespace std;
class overload{
    int a,b;
    float c,d;
    public:
    int add(int x, int y){
        a=x;
        b=y;
        return a+b;
    }
    float add(float x, float y){
        c=x;
        d=y;
        return c+d;
    }
};
int main(){
    overload o1;
    o1.add(5, 9);
    o1.add(9.3, 5.6);
    return 0;
}