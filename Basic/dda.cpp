#include <iostream>
using namespace std;

int sumNatNo(int n)
{
    int total=(((n+1)*(n))/2);
    return total;
}
int main()
{
    cout<<sumNatNo(9);
}