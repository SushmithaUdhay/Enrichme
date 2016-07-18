#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,count[50],ch1,vote,max,a;
    char party_name[25][25],contest[25][25];
    
    //party_name=(char *) malloc (20*sizeof(char));
    //contest=(char *) malloc (20*sizeof(char));
    
    for(i=0;i<n;i++)
    {
        count[i]=0;
    }
    
    printf("Enter the no of Parties participating:\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the %d party name:\n",i+1);
        scanf("%s",party_name[i]);
        printf("Enter the contestant in this party:\n");
        scanf("%s",contest[i]);
    }
    
   do
    {
        printf("VOTING\n");
        printf("1.vote\n");
        printf("2.quit\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch1);
        if(ch1==1)
        {
            for(i=0;i<n;i++)
            {
                printf("%d %s\n",i+1,party_name[i]);
            }
            printf("Enter your vote:\n");
            scanf("%d",&vote);
                
            for(i=0;i<n;i++)
            {
                if(i==vote-1)
                {
                    count[i]++;
                }
            }
        }
    }while(ch1==1);
    
    max=count[0];
    for(i=1;i<n;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            a=i;
        }
    }
    
    printf("the elected party is %s",party_name[a]);
    
}
