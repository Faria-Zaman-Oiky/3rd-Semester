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
        this->next=nullptr;
    }
};
class linkedlist
{
    public :
        Node *head=nullptr;
        void add(int v)
        {
            Node *newnode=new Node(v);
            if(head==nullptr){
                head=newnode;
            return;
        }
        Node *temp=head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=newnode;
}
void print()
{
    Node *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->value<<"->"<<endl;
        temp=temp->next;
    }
}
void removenode(int n)
{

Node *curr=head;
Node *prev=nullptr;
while(n--)
{
    prev=curr;
    curr=curr->next;
}
prev->next=curr->next;
delete curr;
}
};
int main()
{
    linkedlist l;
    for(int i=1;i<=10;i++)
    {
        int x=i*10;
        l.add(x);
    }
    l.print();
    //my ID is 1597
    int n;
    cout<<"enter the position you want to delete"<<endl;
    cin>>n;
    l.removenode(n);
    l.print();
}
