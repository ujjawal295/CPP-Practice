#include <iostream>
using namespace std;

bool dubElem(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                return true;
            }  
        }
    }
    return false;  
}
int main()
{
    int arr[]={3,6,9,1,0,4,56,24,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<dubElem(arr,n);
}