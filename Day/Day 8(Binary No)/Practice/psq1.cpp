#include <iostream>
#include <math.h>
using namespace std;
 
int binToDec(int binNum)
{

    int n=binNum;
    int ld=0;
    int pow = 1;
    int result=0;
    
    while(n>0)
    {
        ld=n%10;
        result=(ld*pow)+result;
        pow=pow*2;
        n=n/10;
    }
    return result;    
}
int main()
{
    cout<<binToDec(111);
}