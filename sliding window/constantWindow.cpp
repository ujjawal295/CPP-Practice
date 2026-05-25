#include <iostream>
using namespace std;

int main()
{
    int arr[]={-1,4,2,7,3,-2,9};
    int n = sizeof(arr)/sizeof(int);
    
    int l = 0;
    int r = 3;

    int k = 4;
    int sum = 0;
    for(int i=0;i<k;i++)
    {
        sum += arr[i];
    }
    
    while(r<n-1)
    {
        sum -=arr[l++];
        sum +=arr[++r];
        cout<<sum<<endl;
    }
    

}

