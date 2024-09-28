#include<iostream>
using namespace std;
class box
{
private :
    float l,w,h;
public :
    box(float l,float w,float h)
    {
        this->l=l;
        this->w=w;
        this->h=h;
    }
    friend void print(box &b);
    friend class volume;

};
void print(box &b)
 {
        cout<<"length "<<b.l<<endl;
        cout<<"width "<<b.w<<endl;
        cout<<"height "<<b.h<<endl;
    }

class volume
{
public:
    float volumecal(box &b)
    {
        return b.l*b.h*b.w;
    }
};
int main()
{
    box b1(1,2,3);
    volume v;
    print(b1);
    cout<<"volume "<<v.volumecal(b1);


}
