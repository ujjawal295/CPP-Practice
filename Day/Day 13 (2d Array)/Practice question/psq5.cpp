#include <iostream>
using namespace std;

bool matrixSearch(int (*arr)[4],int n,int m,int key)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==key)
            {
                cout<<"key found";
                return true;
            }
        }
    }
    cout<<"Not Found";
    return false;
}

int main()
{
    int arr[4][4]={{10,20,30,40},
                  {15,25,35,45},
                  {27,29,37,48},
                  {32,33,39,50}};

    matrixSearch(arr,4,4,9);
    return 0;
    
}