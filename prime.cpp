#include<iostream>
using namespace std;
int prime(int a)
{
    int i,flag=0;
    if(a==0||a==1)
        flag=1;

        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
             flag=1;
            break;
        }

    if(flag==0)
        cout<<"prime number";
    else
        cout<<"not";
}
int main()
{
    int a;
    cout<<"input a number ";
    cin>>a;
    prime(a);


}
