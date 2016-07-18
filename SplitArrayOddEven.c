#include<stdio.h>
void main()
{
	int a[10],o[10],e[10],n,i,k=0,l=0;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if((a[i]%2)==1)
		{
			o[k]=a[i];
			k++;
		}
		else
		{
			e[l]=a[i];
			l++;
		}
	}
	printf("Even array: ");
	for(i=0;i<l;i++)
	{
		printf("%d\t",e[i]);
	}
	printf("\nOdd array: ");
	for(i=0;i<k;i++)
	{
		printf("%d\t",o[i]);
	}
	printf("\n");
}
