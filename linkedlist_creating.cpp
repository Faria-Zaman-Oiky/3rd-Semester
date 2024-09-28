#include<iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value=value;
        next=nullptr;
    }
};
class Linkedlist
{
public:
    Node *head=nullptr;
    void add(int data)
    {
        Node *newnode= new Node(data);
        if(head==nullptr)
        {
            head=newnode;

        }
        else
        {
            Node *temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    void display()
    {
        Node *temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->value<<"->";
            temp=temp->next;
        }
    }
    void startlink( int data)
    {
        Node *temp=new Node(data);
        if(head==nullptr)
        {
            head=temp;
        }
        else
        {
            temp->next=head;
            head=temp;
        }
    }
};
int main()
{
    Linkedlist l1;
    l1.add(10);

    l1.add(20);
    l1.add(30);
    l1.display();
    l1.startlink(28);
    cout<<"after";
    l1.display();
};
