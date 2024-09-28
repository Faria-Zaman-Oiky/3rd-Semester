#include<iostream>
using namespace std;
void vice_versa(char s[100])
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='0')
            s[i]='1';
        else
            s[i]='0';
    }
    cout<<s;
}
int main()
{
    char s[100];
    cout<<"enter the number";
    cin>>s;
    vice_versa(s);
}

