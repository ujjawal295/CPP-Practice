#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int arr[10];
    memset(arr,8,sizeof(arr));
    for(int i=0 ; i< 10; i++)
    {
        cout<<arr[i]<<endl;
    }
}
