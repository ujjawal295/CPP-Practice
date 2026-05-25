#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={3,4,1,4,7,3,6,2,2};
    int n= arr.size();
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        int index=(abs(arr[i])-1);
        if(arr[index]<0)
        {
            cout<<(abs(arr[i]))<<" ";
        }
        else
        {
            arr[index]= -arr[index];
        }
        
    }
    cout<<"]";
    
}