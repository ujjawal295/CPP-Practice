#include <iostream>
#include <string>

using namespace std;


bool isAnagram(char str1[],char str2[])
{
    int arr[26]={0};
    if(strlen(str1)!=strlen(str2))
    {
        cout<<"Not valid";
        return false;
    }
    for(int i=0;i<strlen(str1);i++)
    {
        int idx=str1[i]-'a';
        arr[idx]++;
    }
    for(int i=0;i<strlen(str2);i++)
    {
        int idx=str2[i]-'a';
        if(arr[idx]==0)
        {
            cout<<"Not valid";
            return false;
        }
        arr[idx]--;
    }
    cout<<"Valid";
    return true;
}

int main()
{
    char str1[]="night"; 
    char str2[]="tilhn";
    isAnagram(str1,str2);
    
}