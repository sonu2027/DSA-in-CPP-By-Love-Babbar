// 1207: Unique number of occurances
#include <iostream>
using namespace std;
bool uniqueOccurrences(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {   
        while(arr[i]==arr[i+1]){
            i++;
        }
        int count=0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i]=arr[j]){
                count++;
            }
        }
        
    }
    
}
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[1000];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "array occurances will be true or false " << uniqueOccurrences(arr, n);
    return 0;
}