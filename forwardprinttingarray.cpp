#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[50];
    cout<<"input the size of the array :"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" the array is "<<endl;

    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
