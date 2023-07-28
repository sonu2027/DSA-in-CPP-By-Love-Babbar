//Reverse the array
void reverseArray(vector<int> &arr , int m)
{
        int temp;
        int end=arr.size()-1;
        int start=m+1;
        for(int j=m+1;j<arr.size()-1;j+=2){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
}
