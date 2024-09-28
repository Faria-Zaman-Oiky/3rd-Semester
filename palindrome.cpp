#include<iostream>
using namespace std;
void palindrome(char str[100])
{
    int len,startIndex,endIndex;
    len=0;
    while(str[len]!='\0')
        len++;
    startIndex=0;
    endIndex=len-1;
    while(startIndex<=endIndex)
    {
        if(str[startIndex]!=str[endIndex])
            break;
        startIndex++;
        endIndex--;
    }
    if(startIndex>=endIndex)
        cout<<"palindrome";
    else
        cout<<"not palindrome";
}
int main()
{
    char str[100];
    cout<<"enter a number : "<<endl;
    cin>>str;
    palindrome(str);

}
