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
        Node *newnode=new Node(10);
        if(head==nullptr)
        {
            head=newnode;
        }
        else
        {
            Node*temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;

            }
            temp->next=newnode;
        }
    }
    void display()
    {
    Node*temp=head;
    while(temp!=nullptr)
    {
        cout<<"value : "<<temp->value<<">";
        temp=temp->next;
    }
    }
};
int main()
{
    Linkedlist l1;
    l1.add(10);
    l1.add(20);
    l1.add(30);
    l1.add(40);
l1.display();
}
