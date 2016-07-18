
Gmail
COMPOSE
Labels
Inbox (1)
Starred
Important
Sent Mail
Drafts (2)
ma frnd shares..
my mails
More 
 
 
Move to Inbox More 
1 of 3  
 
Collapse all Print all In new window
pgm,
Inbox
x 

Sushmitha U <sushmiudhay@gmail.com>
Attachments8/14/15

to me 
Attachments area

Sushmitha U <sushmiudhay@gmail.com>
AttachmentsMar 10

to me 
On Fri, Aug 14, 2015 at 11:57 AM, Sushmitha U <sushmiudhay@gmail.com> wrote:
Attachments area

Sushmitha U <sushmiudhay@gmail.com>
Attachments7:58 PM (0 minutes ago)

to yukti 
---------- Forwarded message ----------
From: Sushmitha U <sushmiudhay@gmail.com>
Date: Fri, Aug 14, 2015 at 11:57 AM
Subject: pgm,
To: Sushmitha U <sushmiudhay@gmail.com>
Attachments area

Sushmitha U <sushmiudhay@gmail.com>
Attachments7:58 PM (0 minutes ago)

to yukti 

Attachments area
	
Click here to Reply or Forward
5.56 GB (37%) of 15 GB used
Manage
Terms - Privacy
Last account activity: in 8 days
Details
yukti sharma
Join Google+

Show details

#include<stdio.h>
void main()
{
	int mat[25][25],i,j,sum=0;
	int ord;
	printf("Enter the order:\n");
	scanf("%d",&ord);
	printf("Enter the elements:\n");
	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	
	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0,j=ord-1;i<ord && j>=0;i++,j--)
	{
		
			if(i!=j)
			{
				sum=sum+mat[i][i]+mat[i][j];
				//printf("%d\n",sum);
				
			}

			if(i==j)
			{
				sum=sum+mat[i][i];
			}
		
	}

	printf("The Sum of both diagonals is %d",sum);

}
