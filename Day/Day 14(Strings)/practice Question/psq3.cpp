#include <iostream>
#include <cstring> // for strlen
using namespace std;

int main()
{
    char word[10] = "appa";
    int start = 0;
    int end = strlen(word) - 1;

    while (start <= end)
    {
        if (word[start] != word[end])
        {
            cout << "Not a palindrome ❌" << endl;
            return 0;
        }
        start++;
        end--;
    }

    cout << "Palindrome ✅" << endl;
    return 0;
}
