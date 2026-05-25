#include <iostream>
using namespace std;

int main()
{
    int arr[]={2,6,8};
    int brr[]={7,21,98};
    int n1=sizeof(arr)/sizeof(int);
    int n2=sizeof(brr)/sizeof(int);

    int n3=n1+n2;

    int crr[n3];

    int i=0,j=0;
    int k=0;

    while(i<n1&&j<n2)
    {
        if(arr[i]<brr[j])
        {
            crr[k]=arr[i++]; 
        }
        else{
            crr[k]=brr[j++];
        }
        k++;
    }
    while(i<n1)
    {
        crr[k]=arr[i++];
        k++;
    }
    while(j<n2)
    {
        crr[k]=brr[j++];
        k++;
    }

    for(int i=0;i<n3;i++)
    {
        cout<<crr[i]<<" ";
    }
}
