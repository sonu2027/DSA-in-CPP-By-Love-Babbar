#include <iostream>
using namespace std;
int get_pivot(int arr[], int size,int target)
{
    int s = 0;
    int e = size - 1;
    int m = s + (e - s) / 2;
    int pvt=0;
    while (s < e)
    {
        if (arr[m] >= arr[0])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    pvt=s;
    while(pvt<e){
        if(target>=arr[pvt] && target<arr[size-1]){
            
        }
    }
}
int main()
{
    int arr[5]={4, 7, 8, 1, 2};
    int ans = get_pivot(arr, 5,8);
    cout << "Index of pivot element is " << ans << endl;
    return 0;
}