#include<iostream>
using namespace std;
class Circle
{
private:
    float radius;
public:
    Circle (float r):radius(r)
    {

    }
    double area()
    {
        return radius*radius*3.14;
    }

};
int main()
{ float a;double d;
cout<<"input radius "<<endl;
    cin>>a;
    Circle c1(a);

    d=c1.area();

    cout<<"area "<<d<<endl;

    return 0;


}
