#include <iostream>
#include <string>
using namespace std;

void findPerm(string str,string per)
{
    if(str.size()==0)
    {
        cout<<per<<endl;
        return;
    }
    for(int i=0;i<str.size();i++)
    {
        char ch = str[i];
        string nwstr = str.substr(0,i) + str.substr(i+1,str.size()-1-i);
        findPerm(nwstr,per+ch);
    }
    
    
}

int main()
{
    string str = "abc";
    string per = "";
    findPerm(str,per);
}

