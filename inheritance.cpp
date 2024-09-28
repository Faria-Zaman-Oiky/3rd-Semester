//lab 3  question 1
#include<iostream>
using namespace std;
class Person
{ public:
    string name;
    int age;
    Person(string n,int a)
    {
        name=n;
        age=a;
    }
   virtual void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age: "<<age<<endl;
    }
};
class Student :public Person
{ public:
    int studentID;
    Student(string n,int a,int s):Person(n,a),studentID(s)

{

}

    void display() override
    {
      cout<<"name: "<<name<<endl;
      cout<<"age: "<<age<<endl;
      cout<<"student id : "<<studentID<<endl;
    }

};
int main()
{
    Student s1("faria",22,1597);
    s1.display();
}
