#include<stdio.h>
int main()
{
    int arr[100],j,n,i,x;
    printf("input the size of the array ");
    scanf("%d",&n);
    printf("input the elements of the array ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter how many index you want to rotate ");
    scanf("%d",&i);
    printf("enter 0 or 1 for left or right rotate ");
    scanf("%d",&x);
    int k,first=0,last=0;
    if(x==1)
    {
        for(j=0;j<i;j++)
        {
            first=arr[0];
            for(k=0;k<n;k++)
            {
                arr[k-1]=arr[k];
            }
            arr[n-1]=first;
        }
    }
    else
    {
        for(j=0;j<i;j++)
        {
            last=arr[n-1];
            for(k=n-1;k>=0;k--)
            {
                arr[k+1]=arr[k];
            }
            arr[0]=last;
        }
    }
    printf("after rotation \n");
    for(j=0;j<n;j++)
    {
        printf("%d",arr[j]);
    }
}
