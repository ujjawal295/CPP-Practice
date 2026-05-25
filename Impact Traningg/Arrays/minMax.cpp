#include <iostream>
using namespace std;

int main()
{
    int arr[]={5,3,2,19,4};
    int n=sizeof(arr)/sizeof(int);

    int max2=INT_MAX;
    int maxi=INT_MIN;

    int count = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            max2=maxi;
            maxi=arr[i]; 
        }
        else if(arr[i]>max2 && arr[i]!=maxi)
        {
            max2=arr[i];
        }
    }

    cout<<"2nd Maximum -> "<<max2<<"\nMinimum -> "<<maxi;

}