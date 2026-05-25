#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,5,9,15};
    int n=sizeof(arr)/sizeof(int);
    int target = 14;

    int i=0,j=n-1;
    int sum=0;


    while(i<j)
    {
        sum=arr[i]+arr[j];

        if(sum==target)
        {
            cout<<i<<" "<<j;
        }
        if(sum>target)
        {
            j--;
        }
        else
            i++;
    }
      
}