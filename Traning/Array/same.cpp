#include <iostream>
using namespace std;

int main()
{
    int arr[]={8,-4,2,-5,7,21,45};
    int n = sizeof(arr)/sizeof(int);

    int sum =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr[i]=0;
        }
        cout<<arr[i]<<endl;
        
    }
}