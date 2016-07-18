#include<stdio.h>
int main()
{
int a[20],count,i,j,size;
printf("enter the size");
scanf("%d",&size);
printf("enter the array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
count=1;
if(a[i]!=0)
{
for(j=i+1;j<size;j++)
{
if(a[i]==a[j])
{
count++;
a[j]=0;
}
}
printf("\nthe occurance of %d is %d",a[i],count);
}
}
printf("\nthe replaced array is:\n");
for(i=0;i<size;i++)
{
printf("%d",a[i]);
}
return 0;
}
