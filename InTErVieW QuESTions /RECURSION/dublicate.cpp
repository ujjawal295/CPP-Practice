#include <iostream>
#include <string>
using namespace std;

void dub(string str,string ans,int i,int map[26])
{
    char ch=str[i];
    int mapIdx= int(ch-'a');
    if(i==str.size())
    {
        cout<< ans;
        return ;
    }
    if(map[mapIdx])
    {
        dub(str,ans,i+1,map);
    }
    else
    {
        map[mapIdx]=true;
        dub(str,ans+str[i],i+1,map); 
    }
}

int main()
{
    string str="apnacollege";
    string ans = "";
    int map[26]={false};
    
    dub(str, ans ,0,map);


}