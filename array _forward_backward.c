//problem 1
#include<stdio.h>
int main()
{
    int arr[10];
    int n;
    printf("input the size of the array ");
    scanf("%d",&n);
    printf("input the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("forward");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nbackward");
   for(int i=0;i<n;i++)
    {
      printf("%d",arr[n-1-i]);
    }
    return 0;
}
