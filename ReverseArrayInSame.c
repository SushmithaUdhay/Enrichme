#include<stdio.h>
void main()
{
	int a[10],i,n,j,b[10];
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	i=n-1;
	for(j=0;j<n;j++)
	{
		b[j]=a[i];
		i--;
	}

	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
