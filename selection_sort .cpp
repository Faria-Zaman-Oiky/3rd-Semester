//question 3
//selection sort
#include<iostream>
using namespace std;
void selection_sort(int a[],int length)
 {

 int total_swap=0;
    for(int i=0;i<length-1;i++)
    {
        int min_pos=i;
        for(int j=i+1;j<length;j++)
        {
             if(a[j]<a[min_pos])
            {
                min_pos=j;
            }
        }
        if(min_pos!=i)
        {
            int temp=a[i];
            a[i]=a[min_pos];
           a[min_pos]=temp;
           total_swap++;

        }

    }cout<<"total_ swap "<<total_swap<<endl;

}
int main()
{
    int  arr[10],n;
    cout<<"input how many numbers you want to input "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]"<<"="<<arr[i]<<endl;
    }


}
