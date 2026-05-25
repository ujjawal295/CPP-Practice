#include <iostream>
using namespace std;

void matrixSearch(int (*arr)[4],int n,int m,int key)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==key)
            {
                c++;
            }
        }
    }
    cout<<c;
}

int main()
{
    int arr[4][4]={{10,20,30,40},
                  {15,25,11,45}};

    matrixSearch(arr,4,4,10);
    return 0;
    
}