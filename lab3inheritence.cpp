#include<iostream>
using namespace std;
class Shape
{
protected :
    string color;
public:
    Shape(string color)
    {
        this->color=color;
    }
    virtual void display()
    {
        cout<<color<<endl;
    }
};
class Circle:public Shape
{
private:
    float radius;
public:
    Circle(string color,float radius):Shape(color)
    {
        this->radius=radius;
    }
    float area()
    {
        float a=3.14*radius*radius;
        return a;

    }
    float circum()
    {
        float c=2*3.14*radius;
        return c;
    }
   void display ()override
   {
       cout<<color<<endl;
   }
};
int main()
{
Shape s("black");
s.display();
Circle c("red",1);
c.display();
cout<<"area "<<c.area()<<endl;
cout<<"circumferernce "<<c.circum()<<endl;
}


