#include <stdio.h>

int main(void) {
	
	int n,i,j,k,a[10][10],m;
	scanf("%d",&n); //get order of matrix
	
	//check for even order matrix
	if(n%2==0)
	{
		printf("Magic Square cant be generated\n");
		goto end;
	}
	j=(n+1)/2;
	i=1;
	m=n*n;
	
	for(k=1;k<=m;k++)
	{
		a[i][j]=k;
		if(k%n==0)
		{
			i=i+1;
			goto l1;
		}
		if(i==1)
		{
			i=n;
		}
		else
		{
			i=i-1;
		}
		if(j==n)
		{
			j=1;
		}
		else
		{
			j=j+1;
		}
		l1: ;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	end: ;
	
	return 0;
}
