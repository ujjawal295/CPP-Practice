#include <iostream>
using namespace std;

void isLower(char word[30],int k)
{
     
    for(int i=0;i<k;i++)
    {
        char ch=word[i];
        if(word[i]>='A' && word[i]<='Z')
        {
            cout<<word[i];
        }
        else
        {
            word[i]=ch-'a'+'A ';
            cout<<word[i];
        }
    }
}

int main()
{
    char word[30];
    cin.getline(word,30);
    int k=strlen(word);
    isLower(word,k);


}