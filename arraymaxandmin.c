#include<stdio.h>
void main()
{
	int a[20],i,max=0,min,n,j;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		if(a[j]>max)
		{
			max=a[j];	
		}	
	}
	printf("The maximum element is: %d\n",max);
	min=max;
	for(j=0;j<n;j++)
	{
		if(a[j]<min)
		{
			min=a[j];
		}
	}
	printf("The minimum element is: %d\n",min);
}
