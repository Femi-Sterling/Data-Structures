#include<stdio.h>
void main()
{
	int a[20],i,n,c1=0,c2=0,c0=0;
	printf("Enter the number of elements in an array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			c0++;
		}
		else if(a[i]==1)
		{
			c1++;
		}
		else if(a[i]==2)
		{
			c2++;
		}
	}
	while(c0>0)
	{
		printf("0 ");
		c0--;
	}
	while(c1>0)
	{
		printf("1 ");
		c1--;
	}
	while(c2>0)
	{
		printf("2 ");
		c2--;
	}
}
