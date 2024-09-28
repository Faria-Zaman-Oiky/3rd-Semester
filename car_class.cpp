#include<iostream>
using namespace std;

class Circle
{
    private:
        double radius;
    public:
        Circle (double r)
               {
                  radius=r;
               }
    double area()
    {
        return radius*radius*3.14;
    }
    double circumference()
    {
        return 2*3.14*radius;
    }
};
int main()
{
    double b,ar,cr;
    cout<<"input radius"<<endl;
        cin>>b;
    Circle c1(b);
    ar=c1.area();
    cr=c1.circumference();
    cout<<"area:"<<ar<<endl;
}
