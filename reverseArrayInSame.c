#include<stdio.h>
void main()
{
	int a[10],i,n,j,b[10],m,t;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=n/2;

	i=n-1;
		for(j=0;j<m;j++)
		{
			t=a[i];
			a[i]=a[j];			
			a[j]=t;
			i--;
		}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
}
