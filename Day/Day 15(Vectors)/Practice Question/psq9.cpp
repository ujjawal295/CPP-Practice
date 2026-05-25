#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int row;
    cout <<"Enter size :- ";
    cin>>row;
    vector<vector<int>> arr(row);

    for(int i=0;i<row;i++)
    {
        // int col;
        // cout<<"Enter col => ";
        // cin>>col;
        // arr[i]=vector<int>(col);
        // for(int j=0;j<col;j++)
        // {
        //     int x;
        //     cout<<"Enter value => ";
        //     cin>>x;
        //     arr[i][j]=x;
        // }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}