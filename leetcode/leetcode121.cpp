#include <iostream>
using namespace std;

int main()
{
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);

    int k=0;
    int max=0;
    for(int i=0;i<n ;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i[arr]<j[arr])
                k=arr[j]-arr[i];
        
            if(max<k)
                max=k;
        }  
    }
    cout<<max;

}