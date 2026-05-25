#include <iostream>
using namespace std;

void binStr(int n,int lastdigi,string ans)
{
    if(n==0)
    {
        cout<<ans;
        return;
    }
    if(lastdigi==0)
    {
        binStr(n-1,0,ans+"0");
        binStr(n-1,1,ans+"1"); 
    }
    else
    {
        binStr(n-1,1,ans+"0");
    }


}

int main()
{
    string ans=" ";
    int lastdigi=0;
    int n=4;
    binStr(n,lastdigi,ans);    
}