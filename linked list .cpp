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
    }
};
int main()
{
    Node n1(1);
    Node n2(2);
    n1.next=&n2;
    cout<<n1.value<<endl<<" "<<n1.next;
}

