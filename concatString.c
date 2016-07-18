#include<stdio.h>
#include<string.h>
int main()
{
int i,j=0,len1,len2;
char str1[10],str2[10],con[20];
printf("enter a string:\n");
scanf("%s",str1);
printf("enter another string:\n");
scanf("%s",str2);
len1=strlen(str1);
len2=strlen(str2);
for(i=0;i<len1;i++)
{
con[i]=str1[i];
}
for(i=len1+1;i<len1+len2+1;i++)
{
con[i]=str2[j];
j++;
}
printf("the concatenated string is %s", con);
return 0;
}
