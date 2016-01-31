#include <stdio.h>

int main(void) {
	int number,i,flag=0;
	scanf("%d",&number);
	
	number++;
	for(i=2;i<number;i++)
	{
		if(number%i==0)
		{
			number++;
		}
		flag=1;
	}
		
		
	if(flag==1)
	{
	    printf("%d",number);
	}
	
	
	return 0;
}
