#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    int even=0,odd=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even=arr[i]+even;
        else
            odd=odd+arr[i];
    }

    cout<<"Even Sum -> "<<even<<"\nOdd Sum -> "<<odd;

}