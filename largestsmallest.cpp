#include<iostream>
using namespace std;
void largest(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
            cout<<"a is the largest"<<endl;
    }
    else if(b>c)
        cout<<"b is the largest "<<endl;
    else
        cout<<"c is the largest"<<endl;
}
void smallest(int a,int b,int c)
{
    if(a<b)
    {
        if(a<c)
            cout<<"a is the smallest"<<endl;
    }
    else if(b<c)
        cout<<"b is the smallest "<<endl;
    else
        cout<<"c is the smallest"<<endl;
}
int main()
{
    int a,b,c;
    cout<<"enter the number a,b,c ";
    cin>>a>>b>>c;
    largest(a,b,c);
    smallest(a,b,c);

}
