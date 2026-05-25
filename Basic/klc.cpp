#include <iostream>
using namespace std;

int main()
{
    int arr[]={5,3,2,1,6,3,8};
    int n=6;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<arr[i];
            
        }
    }
}