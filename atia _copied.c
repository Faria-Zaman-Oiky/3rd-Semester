
#include<stdio.h>
int main()
{
	int i,m,n,arr[50],j,k,x,first=0,last=0;
	printf("How many elements: \n");
	scanf("%d",&n);
	printf("Enter the array: \n");
	for(m=0;m<n;m++)
	{
	scanf("%d",&arr[m]);
	}

	printf("Enter how many rotate you want: \n");
	scanf("%d",&j);
printf("Enter the value of x: \n");
scanf("%d",&x);
if(x==1)
	{
	for(j=0;j<i;j++){
	first=arr[0];
	for(k=0;k<n;k++)
	{
	arr[k-1]=arr[k];}
	arr[n-1]=first;
	}}
	else
	{
	for(j=0;j<i;j++)
	{
	last=arr[n-1];
	for(k=n-1;k>=0;k--)
	{
	arr[k+1]=arr[k];}
	arr[0]=last;
	}}
printf("The array after rotate: \n");
for(j=0;j<n;j++)
{printf("%d\n",arr[j]);}

}
