//problem 3
#include<stdio.h>
int main()
{
    int a[50];
    int n,i,x;
    printf("input the size of the array : ");
    scanf("%d",&n);
    printf("input the array elements ");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    printf("input how many index you want to shift : ");
    scanf("%d",&i);
    printf("input 0 or 1 for left or right shift : ");
    scanf("%d",&x);
    if(x==1)
    {
        for(int j=0;j<n;j++)
        {
            if(j+i<n)
            {
                a[j]=a[j+i];
            }
            else
            {
                a[j]=0;
            }
        }
        printf("after left shift : ");
        for(int j=0;j<n;j++)
            printf("%d",a[j]);
    }
else
{
    for(int j=0;j<n;j++)
    {
        if((n-1-i-j)>=0)
        {
            a[n-1-j]=a[n-1-i-j];
        }
        else
            a[n-1-j]=0;
    }
    printf("after right shifting ");
    for(int j=0;j<n;j++)
    {
        printf("%d",a[j]);
    }
}
}
