#include <iostream>
using namespace std;

long long tiles(int n)
{
    if(n==1 || n==0)
        return 1;
    // VeRtiCal
        long long ans1 = tiles(n-1);
    // HoRiZonTaL
        long long ans2 = tiles(n-2);
    return ans1+ans2;

}
int main()
{
    
    long long n=6;
    cout<< tiles(n);
}