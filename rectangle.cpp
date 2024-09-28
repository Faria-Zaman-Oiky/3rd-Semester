#include<iostream>
using namespace std;
class Rectangle
{
private :
    float length;
    float width;
    public :
    Rectangle(float l,float w)
    {
        length=l;
    width=w;
    }
    float area()
    {
        return length*width;
    }
    float perimeter()
    {
        return (length+width)*2;
    }
};
int main()
{
    float ar,pr,ll,ww;
    cout<<" input length "<<endl;
    cin>>ll;
    cout<<"input width "<<endl;
    cin>>ww;
    Rectangle r1(ll,ww);
    ar=r1.area();
    pr=r1.perimeter();
    cout<<"area "<<ar<<endl;
    cout<<"perimeter "<<pr<<endl;
}
