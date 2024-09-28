//problem 6
#include<stdio.h>
int main()
{
    int arr[50],n,i,v;
    printf("enter the size of the array ");
    scanf("%d",&n);
    printf("enter the position you want to delete : ");
    scanf("%d",&v);
    printf("enter the array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=v-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("after deletion ");
    for(i=0;i<n-1;i++)
    {
        printf("%d",arr[i]);
    }
}
