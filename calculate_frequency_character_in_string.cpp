#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    char str[300]="I am rithik ram from class twelfth i am strong and positive and i will become whatever i want ans succeed in life thats my promise";
    int i=0,alphabet[26]={0},j;
    while(str[i]!='\0')
    {
        if(str[i] >= 'a' && str[i] <= 'j')
        {
            j = str[i]-'a';
            ++alphabet[j];
        }
        ++i;
    }
    for(int i=0;i<26;i++)
    {
        cout<<char(i + 'a')<<": "<<alphabet[i]<<endl;

    }
    return 0;
}
