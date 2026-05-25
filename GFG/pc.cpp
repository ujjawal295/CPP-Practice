#include <iostream>
using namespace std;

int main()
{
    int n=29;
    int count=0;
          for(int i=2;i*i<=n;i++)
          {
              if(n%i==0)
              {
                  count++;
              }
          }
          cout<<count;
          
          if(count<1)
          {
            cout<<"tru";
          }
          else
          {
            cout<<"fls";
          }
   
}
  