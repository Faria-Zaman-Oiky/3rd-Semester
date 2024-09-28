#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[50];
    cout<<"input the size of the array :"<<endl;
    cin>>n;
    cout<<"input the array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"printing the array  in backwards"<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i];
    }
    return 0;
}
