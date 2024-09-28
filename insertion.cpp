//question 3
//insertion sort
#include<iostream>
using namespace std;
void insertion_sort(int a[],int length)
{
    int total_swap=0;
    for(int i=1;i<length;i++)
    {
        int key=a[i];
       int j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
            total_swap++;
        }
        a[j+1]=key;
    }
    cout<<"total swap "<<total_swap<<endl;
}
int main()
{
    int arr[5],n;
    cout<<"input the size of the array "<<endl;
    cin>> n;
    cout<<"input the elements of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]"<<"="<<arr[i]<<endl;
    }
}
