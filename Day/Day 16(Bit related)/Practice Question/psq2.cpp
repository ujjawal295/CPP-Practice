#include <iostream>
using namespace std;

int setBit(int num,int i)
{
    int bitmask = 1 << i;
    return (bitmask|num);
}


int main()
{
    int num = 6;
    int i = 3;
    cout<<setBit(num,i);
}