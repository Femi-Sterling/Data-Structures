#include<stdio.h>
void main()
{
	int a[20],i,j,n,k,temp;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value of k:\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{	
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("The %d maximum element is: %d\n",k,a[n-k]);
	printf("The %d minimum element is: %d",k,a[k-1]);
}
