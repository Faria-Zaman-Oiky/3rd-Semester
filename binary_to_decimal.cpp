#include<iostream>
using namespace std;
void convert(int num)
{
    int binary,decimal=0,base=1,rem;
    binary=num;
    while(num>0)
    {
        rem=num%10;
        decimal=decimal+rem*base;
        num=num/10;
        base=base*2;
    }
    cout<<" the decimal number is : "<<endl<<decimal;
}
int main()
{
    int num;
    cout<<"enter a  binary number : "<<endl;
    cin>>num;
        convert(num);
}
