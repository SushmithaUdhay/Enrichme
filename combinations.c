#include<stdio.h>
int main()
{
  int n,k;
  scanf("%d",&n);
  
  void func(int m)
  {
  	int i,j,a[10];
    for(i=m;i<=n;i++)
    {
      for(j=m;j<=i;j++)
      {
      	a[j]=j;
        printf("%d",a[j]);
      }
      printf("\n");
    }
  }
  for(k=1;k<=n;k++)
  {
    func(k);
  }
  
  return 0;
  
  }
