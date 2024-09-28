#include<stdio.h>
int main()
{
    char c[10];
    gets(c);
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]=='0')
        {
            c[i]='1';
        }
        else
            c[i]='0';
    }
    printf("%s",c);
}
