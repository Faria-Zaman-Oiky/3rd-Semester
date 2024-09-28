//problem 2
#include<stdio.h>
int main()
{
    int arr[10];
    int n;
    printf("input the size of the array ");
    scanf("%d",&n);
    printf("input the array  elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int newarr[10];
    printf("summation ");
    for(int i=0;i<n;i++)
    {
        newarr[i]=arr[i]+arr[n-1-i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",newarr[i]);
    }
    return 0;
}
