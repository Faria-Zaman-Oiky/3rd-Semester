#include<iostream>
using namespace std;
class Book
 {

    private:
    string title;
    string author;
    int pages;
    float price;
    public:
    Book(string t,string a,int p,float pr)
    {
        title=t;
        author=a;
        pages=p;
        price=pr;
    }
    void display()
    {
        cout<<"title: "<<title<<endl;
        cout<<"author: "<<author<<endl;
        cout<<"pages : "<<pages<<endl;
        cout<<"price : "<<price<<endl;

        }
    float discount(float d)
    {
        price=price-price*d/100;

    return price;
    }

};
int main()
{
    Book b1("abc","abc",100,100.3);
    b1.display();
    Book b2("bcd","bcd",200,400.5);
            b2.display();
    Book b3("cde","cde",400,400.555);
    b3.display();
    b1.discount(10);
    b2.discount(20);
    b3.discount(30);
    cout<<"after discount " <<endl;
    b1.display();
    b2.display();
    b3.display();
}
