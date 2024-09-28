//lab 1 q2
#include<iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollnumber;

    float marks[5];

    float totalmarks;
public:
    Student(string n,int r,float m[5])
    {
        name=n;
        rollnumber=r;

    for(int i=0;i<5;i++)
    {
         marks[i]=m[i];
    }

    }
    float t()
    {
        int i;float totalmarks=0;
        for(i=0;i<5;i++)
        {
         totalmarks=totalmarks+marks[i] ;
        }
        return totalmarks;

    }
    void displayinfo()
    {
        cout<<"name "<<name<<endl;
        cout<<"rollnumber "<<rollnumber<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"marks  "<<marks[i]<<endl;
        }
        cout<<"totalnumbers"<<t()<<endl;
    }
};
int main()
{ float marks[5]={100,100,100,100,100};
    Student s1("faria",12,marks);
    s1.t();
    s1.displayinfo();
}
