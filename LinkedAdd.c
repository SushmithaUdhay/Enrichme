#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *next,*prev;
    int value;
    
}*temp,*head1,*head2,*head3,*temp1,*head;



void create(int data)
{
    
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->prev=NULL;
    temp->next=NULL;
    temp->value=data;
    //printf("Enter value:");
    //scanf("%d",&data);
    
    
}

void insert(struct Node** head,int data)
{
    create(data);
    
    if(*head==NULL)
    {
        *head=temp;
        temp1=*head;
    }
    else
    {
        create(data);
        temp1->next=temp;
        temp->prev=temp1;
        temp1=temp;
    }

}

void display(struct Node *head)
{
    struct Node *p;
    p=head;
    while(p!=NULL)
    {
    printf("%d->",p->value);
    p=p->next;
    }
    printf("NULL\n");
}

void add(struct Node** hd1,struct Node** hd2,struct Node** hd3)
{
    struct Node *num1;
    struct Node *num2;
    struct Node *num3;
    num1=(struct Node*)malloc(sizeof(struct Node));
    num2=(struct Node*)malloc(sizeof(struct Node));
    num3=(struct Node*)malloc(sizeof(struct Node));
    num1=*hd1;
    num2=*hd2;
    num3=*hd3;
    
    while(num1!=NULL)
    {
        num1=num1->next;
    }
    while(num2!=NULL)
    {
        num2=num2->next;
    }
    while(num3!=NULL)
    {
        num3=num3->next;
    }
    printf("%d %d %d ",num1->value,num2->value,num3->value);
    while(num1 != *hd1 || num2!=*hd2)
    {
        if(num3 == NULL)
        
        {
            sum=(num1->value)+(num2->value);
            if(sum>9)
            {
                carry= sum/10;
                num3->value=sum%10;
                p=num3;
                
            }
            else
            {
                num3->value=sum;
                p=num3;
            }
        }
        else
        {
            num3=p->prev;
            num1=num1->prev;
            num2=num2->prev;
            sum=(num1->value)+(num2->value);
            if(sum>9)
            {
                carry= sum/10;
                num3->value=sum%10;
                p=num3;
                
            }
            else
            {
                num3->value=sum;
                p=num3;
            }
            
        }
        *hd3=num3;
    }
}
    

int main(void)
{
   
   insert(&head1,3);
   insert(&head1,4);
   insert(&head1,5);
   insert(&head1,9);
   display(head1);
   
   insert(&head2,9);
   insert(&head2,5);
   insert(&head2,0);
   display(head2);
   
   insert(&head3,0);
   insert(&head3,0);
   insert(&head3,0);
   insert(&head3,0);
   display(head3);
   
   add(&head1,&head2,&head3);
   //display(head3);
   
	return 0;
}

