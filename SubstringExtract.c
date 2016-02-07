#include <stdio.h>

void substring(char str[],char substr[],int len1,int *len2)
{
	*len2=0;
	substr[0]=str[0];
	(*len2)++;
	int i,j,flag=0;
	
	for(i=0;i<len1;i++)
	{
	    flag=0;
		for(j=0;j<(*len2);j++)
		{
			if(str[i]==substr[j])
			{
				flag=1;
				break;
			}
		}
			if(flag==0)
			{
				substr[*len2]=str[i];
				(*len2)++;
        	}

	}
	//printf("the length of substing %d",len2);
	//printf("the substring %s",substr);
}	

int main(void) 
{
	char str[25],substr[10];
	int len1,len2;
    //printf("Enter the length:");
	scanf("%d",&len1);
	//printf("Enter the string:");
	scanf("%s",str);
	
	substring(str,substr,len1,&len2);
	substr[len2]='\0';
	
	printf("the length of substing %d\n",len2);
	printf("the substring %s",substr);
	return 0;
}
