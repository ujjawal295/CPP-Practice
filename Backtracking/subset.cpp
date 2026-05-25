#include <iostream>
#include <string>
using namespace std;

void subset(string str,string subst)
{
    if(str.size()==0)
    {
        cout<<subst<<endl;
        return;

    }
    char ch=str[0];
    subset(str.substr(1,str.size()-1),subst+ch);
    subset(str.substr(1,str.size()-1),subst);

}

int main()
{
    string str="ab";
    string subst = "";
    subset(str,subst);
}