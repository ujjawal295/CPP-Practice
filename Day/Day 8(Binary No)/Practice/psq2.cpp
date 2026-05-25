#include <iostream>
#include <math.h>
using namespace std;
 

int main()
{
    int n=8;
    int ld=0;
    int pow = 1;
    int result=0;
    while(n>0)
    {
        ld=n%2;
        result=(ld*pow)+result;
        pow=pow*10;
        n=n/2;
        cout<< result<<endl;
    }
    cout<< result;
}