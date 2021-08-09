#include<stdio.h>
void main()
{
	int a[20],b[20],c[20],j=0,k=0,i,n,n1,n2,x,temp;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			b[j]=a[i];
			j++;
		}else
		{
			c[k]=a[i];
			k++;
		}
	}
	n1=j;
	n2=k;
	n=n1+n2;
	for(i=0,j=n1;i<n;i++,j++)
	{
		b[j]=c[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
