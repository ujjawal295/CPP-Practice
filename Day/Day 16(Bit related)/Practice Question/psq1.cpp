#include <iostream>
using namespace std;

int getBit(int num,int i)
{
    int bitmask = 1 << i;
    if(!(bitmask & num))
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}

int main()
{
    int num=6;
    int i=1;
    cout<<getBit(num,i);
}