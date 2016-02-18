#include <stdio.h>

int check(int num)
{
	int rev,a,r=0;
	a=num;
	
	while(num!=0)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	
	if(rev==a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int main(void) {
	int num,number,flag=0;
	scanf("%d",&number);
	
	for(num=number+1; ;num++)
	{
		flag=check(num);
		
		if(flag==1)
		{
			printf("Next palindrome %d",num);
			break;
		}
	}
	
	return 0;
}
