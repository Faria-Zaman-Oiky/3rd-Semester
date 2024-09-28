#include<iostream>
using namespace std;
void rev(char s[100])
{   char r[100];
    int i,l=0;
    for(i=0;s[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;s[i]!='\0';i++)
    {
        r[i]=s[l-1];
        l--;
    }
    r[i]='\0';
    cout<<"reversed number "<<r;

}
int main()
{
    char s[100];
    cout<<"input a number "<<endl;
    cin>>s;
    rev(s);
}
