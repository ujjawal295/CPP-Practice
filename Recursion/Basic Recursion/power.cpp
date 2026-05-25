#include <iostream>
using namespace std;

int powFunc(int x, int n)
{
    if(n == 0)
        return 1;
    powFunc(x, n/2);

    int sfunc = powFunc(x, n/2) * powFunc(x, n/2);
    if(n % 2 !=0)
        return x* sfunc;
    else
        return sfunc;
}

int main()
{
    int x=2 , n=10;
    cout<< powFunc(x,n);
}

