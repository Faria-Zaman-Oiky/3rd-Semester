#include<iostream>
using namespace std;
class Account
{
private:
    int account_number;
    string name;
    double balance;
public:
    Account(int a,string n,double b):account_number(a),name(n),balance(b){}
    void deposit(double d)
    {
        if(d>0)
            {
                balance=balance+d;
                cout<<"balance after deposit "<<balance<<endl;
            }
        else
            {
         cout<<"invalid deposit amount "<<endl;
            }
    }
    void withdraw(double w)
                  {
                      if(balance>0&&w<=balance)
                      {
                         balance=balance-w;
                         cout<<"balance after withdraw "<<balance<<endl;
                      }
                  }
                  virtual void display()
                  {
                      cout<<"account number "<<account_number<<endl;
                      cout<<"name : "<<name<<endl;
                      cout<<"balance: "<<balance<<endl;
                  }
                  double getbalance()
                  {
                      return balance;
                  }
};
class SavingAccount:public Account
{
private:
    double interest_rate;
public:
    SavingAccount(int a,string n,double b,double i):Account(a,n,b),interest_rate(i)
    {
    }
    void addinterest()
    {
        double interest=(interest_rate/100)* getbalance();
        deposit(interest);
        cout<<"interest added " <<interest<<endl;
    }
    void dispaly()
    {
        cout<<"interest rate "<<interest_rate<<endl;
    }
};
int main()
{
    Account acc(1233,"faraiu",10000);
    acc.display();
    acc.deposit(500);
    acc.withdraw(300);
    acc.display();
    cout<<endl;
    SavingAccount sa(1234,"alex",20000,50);
    sa.display();
    sa.addinterest();
    sa.dispaly();
}
