#include <iostream>
using namespace std;

int main()
{
    int arr[]={3,5,2,9};
    int n=sizeof(arr)/sizeof(int);
    
    int maxlen=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum=arr[k]+sum;                     
            }
            if(sum<=14)
                maxlen=max(maxlen,j-i+1); 
        }
    }
    cout<<maxlen;
}