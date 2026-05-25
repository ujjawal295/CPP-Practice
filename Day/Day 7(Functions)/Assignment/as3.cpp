#include <iostream>
#include <math.h>

using namespace std;


// a^2+b^2+2*a*b;

int formula(int a,int b)
{
    int formula=(pow(a,2)+pow(b,2)+(2*a*b));
    return formula;
}

int main()
{
    cout<<"answer is :-"<<formula(2,4);
}