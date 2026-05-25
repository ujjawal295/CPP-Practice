#include <iostream>
using namespace std;

int pairQue(int n)
{
    if(n==1 || n==2)
    {
        return n;
    }
    
    return pairQue(n-1) + (n-1) * pairQue(n-2);


}
int main()
{
    int n = 12;
    cout<<pairQue(n);
}