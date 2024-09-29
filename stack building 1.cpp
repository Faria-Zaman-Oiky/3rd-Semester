#include<iostream>
using namespace std;

class Stack
{ private :
    int arr[5];
    int top;
public:
    Stack()
    {
        top=-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
    bool isempty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(top==4)
        return true;
        else
            return false;
    }
    void push(int val)
    {
        if(isFull())
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=val;

        }
    }
    int pop()
    {
        if(isempty())
        {
            cout<<"stack underflow"<<endl;

        }
        else
        {
            int popval=arr[top];
            arr[top]=0;
            top--;
            return popval;
        }
    }
    void peek()
    {
        cout<<"peek"<<arr[top]<<endl;
    }
    void display()
    {
        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<endl;

        }
    }
    void Sort()
    {
        for(int i=0;i<5;i++)
        {
            int min_pos=i;
            for(int j=i+1;j<5;j++)
            {
                if(arr[j]<arr[i])
                {
                    min_pos=j;
                }
            }
            if(min_pos!=i)
            {
                int temp=arr[i];
                arr[i]=arr[min_pos];
                arr[min_pos]=temp;
            }
        }
    }
    void reversed()
    {
        int n=top+1;
        int temp[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=pop();
        }
        for(int i=0;i<n;i++)
        {
           push(temp[i]);
        }


    }

};
int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.display();
    s1.push(60);
    s1.pop();
    s1.push(50);
    s1.peek();
    s1.Sort();
    s1.display();
    s1.reversed();
    cout<<"after reversing "<<endl;
    s1.display();
    s1.push(80);
    s1.pop();
    s1.peek();
    s1.reversed();
    s1.display();

}
