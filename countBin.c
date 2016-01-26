#include <stdio.h>

int main(void) {

	int num,rem=0,quo=0,count=0;
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%2;
		num=num/2;
		count++;
	}
	printf("%d",count);
	return 0;
}
