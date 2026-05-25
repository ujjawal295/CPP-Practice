#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the no : - ";
    cin>>n;
    int arr[n];

    // loop for the code
    int k=n;
    for(int i=0;i<n;i++)
    {
        arr[i]=--k;
        cout<<arr[i]<<endl;
    }
}