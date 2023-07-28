//Code studio problem
//problem statement:Find unique no in an array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array " << endl;
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
    cout << "Printing the value of array" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    //Implementations 
    for (int k = 0; k < n; k++)
    {
        int count=0;
        for (int l = 0; l <n; l++)//4 5 8 5 4
        {
            if(arr[k]==arr[l]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[k];
            break;
        }
        
    }
    
    return 0;
}