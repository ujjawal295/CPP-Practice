#include <iostream>
using namespace std;

int main()
{
    char word[10]="markram";
    int start = 0;
    int end = strlen(word)-1;
    while(start<=end)
    {
        if(word[start++]!=word[end--])
        {
            cout<<"Not a palindrome ❌";
            return 0;
        }
    }
    cout<<"Palindrome ✅";
    return 0;
}