#include <iostream>
using namespace std;

int main()
{
    int arr[]={8,7,5,4,3};
    int n=sizeof(arr)/sizeof(int);

    int dec = 1;
    int inc = 1;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1] )
            inc=inc+1;

        if(arr[i]>arr[i+1])
            dec=dec+1;
    }

    if(inc==n || dec==n)
        cout<<"Array mono";
    else
        cout<<"Not mono";
}
