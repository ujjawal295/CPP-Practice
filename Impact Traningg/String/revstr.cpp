#include <iostream>
#include <string>

using namespace std;

int main()

{
    string str="hello welcome to java";

    string rev = "";

    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if((ch!='a') && (ch!='e') && (ch!='i') && (ch!='o') && (ch!='u'))
        {
            rev=rev+ch;
        }
    }
    cout<<rev;

}