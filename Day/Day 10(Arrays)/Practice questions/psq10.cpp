#include<iostream>
using namespace std;

void buySellStocks(int stocks[],int n)
{
    
    int best=INT_MAX;
    int maxProf=0;
    for(int i=0;i<n;i++)
    {   
        best=min(best,stocks[i]);
        int currProf=(stocks[i]-best);
        maxProf=max(maxProf,currProf);    
    }
    
    cout<<maxProf;

    
    
}
int main()
{
    int stocks[]={7,1,4,2,12,3};
    int n=sizeof(stocks)/sizeof(int);
    buySellStocks(stocks,n);
}