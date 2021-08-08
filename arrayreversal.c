#include<stdio.h>
void main()
{
	int a[30],i,n,j,temp,k;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0,k=n-1;j<(n/2);j++,k--)
	{
		temp=a[j];
		a[j]=a[k];
		a[k]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}
