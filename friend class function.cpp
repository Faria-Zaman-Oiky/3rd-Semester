#include<iostream>
using namespace std;

class Box
{
private:
    float length,width,height;
public :
    Box(float l,float w,float h)
    {
        length=l;
        width=w;
        height=h;
    }
    friend void print(Box &b);
    friend class VolumeCalculator;
};
void print(Box &b)
{
        cout<<"length "<<b.length<<endl;
        cout<<"width "<<b.width<<endl;
        cout<<"height "<<b.height<<endl;

    }
    class VolumeCalculator
    {
    public:
        void print_volume(Box& b)
        {
           double volume=b.length*b.height*b.width;
           cout<<"volume is :"<<volume<<endl;
        }
    };
    int main()
    {
        Box b1(10,20,30);
        VolumeCalculator v1;

        print(b1);
        v1.print_volume(b1);
    }

