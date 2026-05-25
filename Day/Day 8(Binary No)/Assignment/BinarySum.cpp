#include <iostream>
using namespace std;

int decToBin(int decNum)
{
    int n=decNum;
    int result=0;
    int pow=1;
    while(n>0)
    {
        int k=n%2;
        result+=k*pow;
        pow=pow*10;
        n=n/2;
    }
    return result; 
}
int binToDec(int binNum)
{
    int n=binNum;
    int result=0;
    int pow=1;
    while(n>0)
    {
        int k=n%10;
        result+=k*pow;
        pow=pow*2;
        n=n/10;
    }
    return result;
}
int addBinNo(int a,int b)
{
    int c = 0;
    int k = binToDec(a);
    int l = binToDec(b);
    c=k+l;
    int m = decToBin(c);
    return m;
}

int main()
{
    cout<<decToBin(10)<<endl;//1010
    cout<<binToDec(1010)<<endl;
    cout<<addBinNo(1010,1010);
    
}