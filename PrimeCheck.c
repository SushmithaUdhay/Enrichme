#include<stdio.h>

int main(){

    int num,i,count,n,k=0,prime[100],prod;
   // printf("Enter max range: ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++)
         	{
             if(num%i==0)
             	{
                 count++;
                 break;
                }
            }
        
         if(count==0 && num!= 1)
            {
            	//printf("%d\n",k);
            	prime[k++]=num;
            }
    }
    
   /* for(i=0;i<k;i++)
    {
    	printf("%d ",prime[i]);
    }
    */
    for(i=0;i<k-1;i++)
    {
    	prod=prime[i]*prime[i+1]*prime[i+2];
    	 if(prod==n)
    	 {
    	 	printf("%d %d %d",prime[i],prime[i+1],prime[i+2]);
    	 	return 0;
    	 }
    }
    printf("%d",-1);
    
  
   return 0;
}
