#include <iostream>
using namespace std;

int main()
{
    int arr[]={2,4,5,8};
    int n=sizeof(arr)/sizeof(int);
    int target = 11;

    int i=0,j=n-1,sum=0;

    while(i<j)
    {
        sum=arr[i]+arr[j];
        if(sum==target)
        {
            cout<<arr[i]<<" "<<arr[j];
            return 0;
        }
        if(sum>target)
            j--;
        else
            i++;
    }
    cout<<"Nia mila";
    return 0;
  
}