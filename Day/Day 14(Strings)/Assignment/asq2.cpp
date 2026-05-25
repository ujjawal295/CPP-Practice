#include <iostream>
#include <string>
using namespace std;

int eqlStr(string str1,string str2)
{
    string str;
    if(str1.length()!=str2.length())
    {
        return false;
    }
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]!=str2[i])
        {
            cout<<str[i];  
        }
    }
    return true;
}
int main()
{
    string str1="bank";
    string str2="kanb";

    cout<<eqlStr(str1,str2);
}