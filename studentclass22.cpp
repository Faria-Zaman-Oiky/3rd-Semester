 #include<iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollnumber;
    float marks[5];
    float totalmarks=0;
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
    float total()
    {
        float totalmarks=0;
        for(int i=0;i<5;i++)
        {
            totalmarks=totalmarks+marks[i];
        }
        return totalmarks;
    }
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"ID :"<<rollnumber<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"marks"<<i+1<<" "<<marks[i]<<endl;

        }
        cout<<"total marks "<<total()<<endl;
    }
    float percentage()
    {
        return (total()*100)/500;
    }
};
int main()
{float marks[5]={100,100,100,100,100};
    Student s1("Faria Zaman",1597,marks);
    s1.display();
   cout<<"percentage : "<<s1.percentage();

}
