//problem 4
#include<stdio.h>
int main()
{
	int i,n,arr[50],pos,j,x,first=0,last=0;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the array elements ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}

	printf("Enter how many index you want to rotate: ");
	scanf("%d",&pos);
printf("Enter 0 or 1 for left or right rotation ");
scanf("%d",&x);
if(x==1)
	{
	for(j=0;j<pos;j++){
	first=arr[0];
	for(i=0;i<n;i++)
	{
	arr[i-1]=arr[i];}
	arr[n-1]=first;
	}}
	else
	{
	for(j=0;j<pos;j++)
	{
	last=arr[n-1];
	for(i=n-1;i>=0;i--)
	{
	arr[i+1]=arr[i];}
	arr[0]=last;
	}}
printf("The array after rotate: \n");
for(i=0;i<n;i++)
{printf("%d\n",arr[i]);}

}
