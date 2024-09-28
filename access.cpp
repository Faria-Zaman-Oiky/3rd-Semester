#include<iostream>
using namespace std;
class circle
{ private :
    float r;
public:
    float radius;
    void area()
    {
        cout<<"area : " <<3.14*radius*radius<<endl;

    }
    void setter(float r1)
    {
        r=r1;
    }
    void getter()
    {
        cout<<"r : " <<r<<endl;
    }
};
int main()
{
    circle c1;
    c1.radius=1;
    c1.area();
    c1.setter(3);
    c1.getter();

}
