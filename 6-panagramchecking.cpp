#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdbool.h>
#include<ctype.h>
using namespace std;
int main()
{
    int freq[26] = {0};
    char str[100] = "the quick brown fox";
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i] != ' ')
        {
            char c = tolower(str[i]);
            int index = c - 'a';
            freq[index]++;
        }
    }
    int flag = true;
    for(int i = 0;i<26;i++)
    {
        if(freq[i]==0)
        {
            flag == false;
        }
    }
    if(flag==true)
    {
        cout<<"Entered string is a pangram"<<endl;
    }
    else
    {
        cout<<"Entered string is not a pangram"<<endl;
    }
    return 0;
}
