#include <iostream>
#include <string>

using namespace std;

int main()

{
    string str="factorial";

    string res = "";

    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if((ch!='a') && (ch!='e') && (ch!='i') && (ch!='o') && (ch!='u'))
        {
            res=res+ch;
        }
    }
    cout<<res;

}