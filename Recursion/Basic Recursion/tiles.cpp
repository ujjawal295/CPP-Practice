#include <iostream>
using namespace std;

int setTiles(int n)
{
    if(n==1 || n==2)
    {
        return n;
    }
    //vertically 
    return setTiles(n-2)+setTiles(n-1);
}
int main()
{
    int size = 4;
    cout<<setTiles(size);

}