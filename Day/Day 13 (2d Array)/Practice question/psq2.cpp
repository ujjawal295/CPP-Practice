#include <iostream>
using namespace std;

void sparseMatrix(int arr[][4],int n,int m)
{
    int srow = 0;
    int scol = 0;
    int erow = n-1;
    int ecol = m-1;

    for(int i=srow;i<erow;i++)
    {
        
    }
    


}

int main()
{
    int n,m;
    cout<<"Enter rows : ";
    cin>>n;
    cout<<"Enter column : ";
    cin>>m;
    int arr[n][m];
    int k;
    k=sizeof(arr)/sizeof(int);
    cout<<k;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
