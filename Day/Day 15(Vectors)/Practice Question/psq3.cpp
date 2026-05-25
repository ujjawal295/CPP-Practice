#include <iostream>
using namespace std;

int main()
{
    int rows,colm;
    cout<<"Enter rows => ";
    cin>>rows;
    cout<<"Enter column => ";
    cin>>colm;

    int* *matrix = new int*[rows];
    int x=1;
    for(int i=0;i<rows;i++)
    {
        matrix[i] = new int[colm];
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<colm;j++)
        {
            matrix[i][j]=x;
            cout<<matrix[i][j]<<" ";
            x++;
        }
        cout<<endl;
    }

}