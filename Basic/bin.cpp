#include <iostream>
#include <math.h>
#include <array>
using namespace std;

int main()
{
    int ans = 0;
    int n = 24;
    int start = 0; int end = n/2;

    if(n==0 || n==1)
    {
        cout << n;
        return 0;
    }
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(mid * mid == n)
        {
            cout<<mid;
            return 0;
        }
        if(mid * mid > n)
        {
            end = mid -1;
        }
        if(mid * mid < n)
        {
            ans = mid;
            start = mid +1;
        }
    }
    cout<<ans;
}





