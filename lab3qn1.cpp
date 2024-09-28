#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
public:
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
virtual void display()
    {
        cout<<" name "<<name<<endl;
        cout<<"age "<<age<<endl;
    }
};
class Student:public Person
{
private :
    int studentID;
    public:
    Student(string name,int age,int studentID):Person(name,age)
    {
        this->studentID=studentID;
    }
    void display() override
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : " << age<<endl;
        cout<<"studentID: "<<studentID<<endl;
    }
};
int main()
{
    Person p1("faria",22);
    p1.display();
    Student s1("maria",30,234);
    s1.display();
}
