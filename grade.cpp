#include<iostream>
using namespace std;
void grade(int a)
{
    if(a>=80)
        cout<<"A+";
    else if(a>=70)
        cout<<"B+";
    else if(a>=60)
        cout<<"C+";
    else
        cout<<"fail";
}
int main()
{
    int a;
    cout<<"enter a number ";
    cin>>a;
    grade(a);
    return 0;

}
