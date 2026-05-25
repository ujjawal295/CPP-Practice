#include <iostream>
using namespace std;

int main()
{
    int mat[2][3]={{1,3,4},
                   {5,6,9}};
    int trans[3][2]={};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            trans[j][i]=mat[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<trans[i][j];
        }
        cout<<endl;
    }
    
    
}