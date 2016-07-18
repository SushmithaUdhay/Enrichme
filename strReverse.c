#include<stdio.h>
int main()
{
  int i,j=0,count=0;
  char str[10],rev[10];
  printf("enter a string:\n");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
  ++count;
  }
      for(i=count-1;i>=0;i--)
  {
   rev[j]=str[i];
    j++;
  }
  printf("%s",rev);
  return 0;
}
