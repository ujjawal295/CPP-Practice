#include <iostream>
#include <array>
using namespace std;

bool findEle(int arr[],int n,int target)
{
    int start=0;
    int end = n-1;
    while(start<end)
    {
        
        if(arr[start]==target)
        {
            cout<< start;
            return 0;
        }
        else if(arr[start]<target)
        {
            start++;

        }
        else if(arr[end]>target)
        {
            end--;
        }

    }
    return 0;
    
}

int main()
{
    int arr[]={5,8,12,15};
    int n=sizeof(arr)/sizeof(int);
    int target = 12;
    cout<<findEle(arr,n,target);
    
}