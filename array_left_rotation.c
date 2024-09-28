#include<stdio.h>
int main()
{
    int j,n,d,i,arr[100],temp;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    printf("\n how many index you want to shift : ");
    scanf("%d",&d);
    printf("enter the elements of the array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //shifting
    j=0;

    for(i=0;i<n;i++)
        { temp=arr[j]; if((i+d)<n){
        arr[i]=arr[(i+d)%n];
    }
    else
        arr[i]=temp;

    }
    printf("after shifting :");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
