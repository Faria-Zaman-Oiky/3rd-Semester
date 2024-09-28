#include<stdio.h>
int main()
{
    int n,i,arr[10];
    printf("enter the size of the array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        arr[i]=1;
        else
            arr[i]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }


}
