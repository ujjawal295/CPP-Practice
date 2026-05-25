#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter no of rows";
    cin>>rows;
    int n;

    int** arr = new int*[rows];

    int * size = new int[rows];
    for(int i=0;i<rows;i++)
    {

    }
    
        for(int i=0;i<4;i++)
        {
            
            cin>>n;
            arr[i] = new int[n];
        }

        for(int i=0;i<4;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<n;j++)
            {  
                cout << arr[i][j] <<" ";
            }
            cout << endl;
        }
        return 0;
}