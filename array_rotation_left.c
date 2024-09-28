#include<stdio.h>
int main()
{
    int arr[50],b[50],i,j,n,pos,f;
    printf("input the size of the array : ");
    scanf("%d",&n);
    printf("how many index you want to rotate  : ");
    scanf("%d",&pos);
    printf("input the elements of the array : ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    //copying
    for(i=0;i<n;i++)
    {
        b[i]=arr[i];
    }
    //left rotation
    for(j=0;j<n;j++)
    {
f=b[j];
      for(i=0;i<n;i++)
      {
          if(i+pos<n)
            arr[i]=arr[(i+pos)%n];
            else{


            arr[i]=f;
            break;
            }

      }
    }
    printf("after rotation : ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}
