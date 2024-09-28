#include<iostream>
using namespace std;;
void a()
{
    int num[100],a,i,n;
    cout<<"how many numbers :"<<endl;
    cin>>n;
    cout<<"enter the numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<n;i++)
    {
        if(num[i]==0)
            num[i]=1;
        else
            num[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cout<<num[i];
    }
}
int main()
{
    a();
}
