#include<stdio.h>
int main()
{
    int a[100],i,j,pos,size,first;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&pos);
    for(j=0;j<pos;j++)
    {
        first=a[0];
        for(i=0;i<size;i++)
        {
            a[i-1]=a[i];
            a[size-1]=first;
        }
    }
    printf("rotation");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }

}
