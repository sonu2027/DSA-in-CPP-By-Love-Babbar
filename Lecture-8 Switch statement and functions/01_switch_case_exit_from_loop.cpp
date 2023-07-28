/*How to break from while loop when using switch statement in while loop
Condition:
    1.use true in while loop
    2.For completely break from while, write the code in switch statement
    */
#include<iostream>
using namespace std;
int n=5;
int main(){
    while(1){
        switch(n){
            case 5:cout<<n<<endl;
            exit(1);
        }
    }
    return 0;
}