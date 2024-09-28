#include<iostream>
using namespace std;
class Stack
{
private:
    int arr[5];
    int top;
    int Front;
public:
    Stack()
    {
        top=-1;
        Front=-1;
        for(int i;i<5;i++)
        {
            arr[i]=0;
        }
    }
 bool isEmpty()
 {
     if(top==-1){
        cout<<"stack is empty"<<endl;
        return true;
     }
     else
     {
         cout<<"stack is not empty"<<endl;

        return false;
     }
 }
 bool isFull()
 {
     if(top==4)
     {
         cout<<"stack is full"<<endl;
         return true;
     }
     else{
            cout<<"stack is not full"<<endl;
        return false;
     }
 }
 void push(int val)
 {
     if(isFull())
     {
        Front++;
        arr[Front]=val;
     //cout<<"stack overflow ";
     }
     else
     {
         top++;
         arr[top]=val;

     }
 }
 int pop()
{
  if(isEmpty())
  {
      cout<<"stack underflow"<<endl;
  }
  else
  {
      int popValue=arr[top];
      arr[top]=0;
      top--;
  }
 }
 void display()
 {
     for(int i=4;i>=0;i--)
     {
         cout<<arr[i]<<endl;
     }
 }
};
int main()
{
    Stack s1;
    s1.isEmpty();
    s1.pop();
    s1.push(7);
    s1.push(6);
    s1.push(5);
    s1.push(4);
    s1.display();
    s1.pop();
    s1.display();
    s1.push(88);
    s1.push(70);
    s1.display();
    s1.isFull();
    s1.push(10);
    s1.display();
    s1.push(20);
    s1.display();
}
