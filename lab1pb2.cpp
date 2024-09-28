#include<iostream>
using namespace std;
class Student
{ private:

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
    void total()
    {
         totalmarks=0;
        for(int i=0;i<5;i++)
        {
            totalmarks=totalmarks+marks[i];
        }

    }
    void display()
    {
        cout<<"name "<<name<<endl;
        cout<<"roll"<< rollnumber<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"marks" <<i<<marks[i];
        }
        cout<<"total marks "<<totalmarks;
    }




};
int main()
{
    float mm[5]={100,100,100,100,100};
    Student s1("a",2,mm);
s1.total();
    s1.display();

float m1[5]={80,80,80,80,80};
Student s2("b",23,m1);
s2.total();
s2.display();
}
