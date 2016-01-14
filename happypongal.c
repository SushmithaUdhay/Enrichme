#include <stdio.h>
#include<unistd.h>

int main(void) {
	int i;
	char str[15]="HAPPY PONGAL";
	
	for(i=0;i!='\0';i++)
	{
		printf("%c",str[i]);
		sleep(50);
	}
	
	
	return 0;
}
