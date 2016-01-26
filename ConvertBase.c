#include <stdio.h>

int main(void) {
	
	int number,base,rem=0,count=0,i=0,m,k,temp=0,j;
	char bin[100];
	scanf("%d",&number);
	scanf("%d",&base);
	
	if(base<2 || base>36)
	{
		printf("conversion possible for base 2<base<36");
	}
	
	while(number>0)
	{
		rem=number%base;
		if(rem<10)
		{
			bin[i]=rem;
		}
		else
		{
			bin[i]=rem + 55;
		}
		number=number/base;
		count++;
		i++;
	}
	printf("%d\n",count);
	
	m=count/2;
	k=count-1;
	
	for(j=0;j<m;j++)
	{
		temp=bin[k];
		bin[k]=bin[j];
		bin[j]=temp;
		k--;
	}
	
	for(i=0;i<count;i++)
	{
		printf("%d",bin[i]);
	}
	return 0;
}
