//lab 3 question 2
#include<iostream>
using namespace std;
class Shape
{
protected:
    string color;
    public:
    Shape(string c):color(c){}
     virtual void display()
    {
        cout<<"color is : "<<color<<endl;
    }
};
class Circle:public Shape
{ private:
    float radius;

  public:
      Circle(string c,float r):Shape(c),radius(r){}
      double area()
      {
          return radius*radius*3.1416;
      }
      double circumference()
      {
          return 2*3.14*radius;
      }
      void display()override
      {
cout<<"color  " <<color<<endl;
          cout<<"radius "<<radius<<endl;
      }
};
int main()
{
    Circle c1("red",2);
    c1.display();

    cout<<"area is "<<c1.area()<<endl;
    cout<<"circumference :"<<c1.circumference()<<endl;

    return 0;
}
