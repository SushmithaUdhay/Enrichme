#include<stdio.h>
void main()

{
	int a[10][10],b[10][10],m,n,i,j,prod=1;
	printf("enter the size of matrix:\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements:\n");

	//to get elements for two-d array	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	
	printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",b[i][j]);
		}
	
	printf("\n");
	}
}
