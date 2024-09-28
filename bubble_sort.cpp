//question 3
//bubble sort
#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
    int total_swap=0;

for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for( int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
               int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
                total_swap++;
            }
        }
        if(flag==0)
            break;
    }
 cout<<"Total swap "<<total_swap<<endl;
}

int main()
{
    int i,j,a[5],n;
    cout<<"enter how many input you want input "<<endl;
    cin>>n;
    cout<<"input the array "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);

cout<<"after sorting"<<endl;
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}
