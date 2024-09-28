#include<iostream>
using namespace std;
void swapp(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
}
int main()
{
    int a,b;
    cout<<"enter two number a and b "<<endl;
    cin>>a>>b;
    swapp(a,b);
    return 0;
}
