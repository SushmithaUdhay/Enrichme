#include <stdio.h>

int main(void) {
	int number;
	float temp,divide;
	
	scanf("%d",&number);
	
	temp=number;
	divide=1;
	
	while(temp-divide>0)
	{
	    temp=(temp + divide)/2;
	    divide=number/temp;
	}
	
	printf("%f",temp);
	
	return 0;
}

