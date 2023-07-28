#include<iostream>
using namespace std;
int power(int n){
    //Base case
    if(n==0)
    return 1;
    //Recursive relation
    int choti=power(n-1);
    int bari=choti*2;
    return bari;
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<power(n);
    return 0;
}
























// #include <iostream>
// using namespace std;
// int power(int n)
// {
//     // Base condition
//     if (n == 0)
//     {
//         return 1;
//     }
//     //Recursive relation
//     return 2 * power(n - 1);
// }
// int main()
// {
//     int n, ans;
//     cout << "Enter n" << endl;
//     cin >> n;
//     ans = power(n);
//     cout << "Ans is:" << ans << endl;
//     return 0;
// }