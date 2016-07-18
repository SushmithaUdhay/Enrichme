#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int len;
    char time[100],hh[100],rail[100];
    scanf("%s",time);
    len=strlen(time);
    
    if(time[len-2]=='A')
    {
        if(time[0]=='1' && time[1]=='2')
            {
            time[0]='0';
            time[1]='0';
            time[len-2]='\0';
            printf("%s",time);
        }
        else
            {
            time[len-2]='\0';
            printf("%s",time);
        }
    }
        else
            {
            if(time[0]=='1' && time[1]=='2')
                {
                time[len-2]='\0';
            printf("%s",time);
            }
            else
                {
                time[0]=1+time[0];
                time[1]=2+time[1];
                time[len-2]='\0';
            printf("%s",time);
                
            }
        }
    
    return 0;
}
