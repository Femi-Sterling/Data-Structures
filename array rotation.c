#include<stdio.h>
void main()
{
	int a[20],i,temp,n,r;
	printf("Enter the size of the array: \n");
	scanf("%d",&n);
	printf("How many rotations do you want to perform?\n");
	scanf("%d",&r);
	printf("Enter the array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<r;i++)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[n-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
