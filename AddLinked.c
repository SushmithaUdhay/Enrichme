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

void add(struct Node* headd1,struct Node* head2,struct Node* head3)
{
    struct Node *num1;
    struct Node *num2;
    struct Node *num3;
    struct Node *p;
    num1=(struct Node*)malloc(sizeof(head1));
    num2=(struct Node*)malloc(sizeof(struct Node));
    num3=(struct Node*)malloc(sizeof(struct Node));
    p=(struct Node*)malloc(sizeof(struct Node));
    num1=head1;
    num2=head2;
    num3=head3;
    int sum,carry;

    while(num1->next!=NULL)
    {
        num1=num1->next;
    }
    while(num2->next!=NULL)
    {
        num2=num2->next;
    }
    while(num3->next!=NULL)
    {
        num3=num3->next;
    }
    
    
    
    while(num1->value != head1->value || num2->value != head2->value)
    {
        if(num3->next == NULL)
        
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
            sum=carry+(num1->value)+(num2->value);
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
      
       display(head3);
    }
}
    

int main(void)
{
   
   insert(&head1,3);
   insert(&head1,4);
   insert(&head1,5);
   insert(&head1,13);
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
   
   add(head1,head2,head3);
   //display(head3);
   
	return 0;
}
