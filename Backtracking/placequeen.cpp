#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>> board, int row, int col)
{
    int n=board.size();
    //vertical
    for(int i=0;i<n;i++)
    {
        if(board[row][i]=='Q')
            return false;
    }

    // horizontal
    for(int j=0;j<n;j++)
    {
        if(board[j][col]=='Q')
            return false;
    }
    
    //diagonal

    for(int i=row,j=col;j>=0 && i>=0;i--,j--)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }
    for(int i=row,j=col;i>=0 && j<n ;i--,j++)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }
    return true;

}

void Board(vector<vector<char>> board, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------"<<endl;
}


bool placeQueen(vector<vector<char>> board, int row)
{
    int n=board.size();
    int count=0;
    if(row==n)
    {
        Board(board,n);
        return true;
    }
    for(int i=0;i<n;i++)
    {
        if(isSafe(board,row,i))
        {
            board[row][i]='Q';
            if(placeQueen(board,row+1))
                return true;
            board[row][i]='.';
        }
        
    }
    return count;
}

int main()
{
    vector<vector<char>> board;
    int n=4;
    for(int i=0;i<n;i++)
    {
        vector<char> newRow;
        for(int j=0;j<n;j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    cout<< placeQueen(board,0)<<" Total no ";
}