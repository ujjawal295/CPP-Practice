#include <iostream>
using namespace std;

void dubEle(string str,int i,string ans,int arr[26])
{
    int ch = int(str[i]);
    int idx=str[i]-'a';
    
    if(i<0)
    {
        cout<<ans;
        return;
    }
    
    if(arr[idx]==true)
    {
        
        dubEle(str,i-1,ans,arr);
    }
    else
    {
        arr[idx]=true;
        dubEle(str,i-1,ans+str[i],arr);
    }
}

int main()
{
    string str="ujjawal";
    string ans = "";
    int arr[26]={false};
    dubEle(str,str.size(),ans,arr);
    
}