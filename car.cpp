//lab 1 q 3
#include<iostream>

using namespace std;
class Car
{
    private:
    string name;
string model;
int year;
float price;
    public:
        Car(string s,string m,int y,float p)
        {
            name=s;
            model=m;
            year=y;
            price=p;

        }
        void display()
        {
            cout<<"name: "<<name<<endl;
            cout<<"model "<<model<<endl;
            cout<<"year "<<year<<endl;
            cout<<"price "<<price<<endl;
        }
        double discount(float a)
        {
            price=price-(price*a)/100;
        }
};
        int main()
        {
            Car c1("audi","mo",2015,60000);
            c1.display();
            double p=c1.discount(10);
            cout<<"after "<<p;
        }

