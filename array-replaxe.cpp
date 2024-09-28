#include<iostream>
using namespace std;
void vice_versa(int a[100],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            a[i]=1;
        else
            a[i]=0;
    }
    cout<<"output ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    int a[100],n;
    cout<<"enter the size of the array : "<<endl;
        cin>>n;
        cout<<"enter the elements of the array "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vice_versa(a,n);
        return 0;
}
