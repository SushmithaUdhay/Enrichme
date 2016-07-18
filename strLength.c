#include<stdio.h>
int main()
{
int count=0,i;
char str[10];
printf("enter a string:\n");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
++count;
}
printf("the length is %d",count);
return 0;
}
