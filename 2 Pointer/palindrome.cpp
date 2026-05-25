#include <iostream>
using namespace std;

int main()
{
    string word = "abca";
    int n=word.length();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(word[i]!=word[j])
        {
            cout<<"\nBkl ye palindrome nai hai samgha na";
            return 0;
        }
        
        i++,j--;
    }

    cout<<"\nAnnu mera baccha ye  palindrome hai 🤌🏼😘";
    return 0;
    
}