#include <iostream>
using namespace std;

int sum(int a, int b)
    {
        int k = a + b;
        return k;
    }
int diff(int a, int b)
    {
        int k = a - b;
        return k;
    }


int main()
{
   int y=sum(6,8);
   int j=diff(6,8);
   cout<<"Sum is :- "<<y<<endl;
   cout<<"Difference is :- "<<j;
}