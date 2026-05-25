#include<iostream>
using namespace std;

int main()
{
    char word[40];
    cout<<"Enter word :- ";
    cin.getline(word,40);
    int k=strlen(word);

    for(int i=0;i<=k;i++)
    {
        char sent = toupper(word[i]);
        cout<<sent;
        
    }
}