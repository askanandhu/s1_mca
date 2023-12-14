#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
	int data;
	struct node *next,*prev;
};
struct node* head = NULL;
struct node* tail = NULL;
struct node* temp = NULL;

struct node* create_node() 
{
    int data;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter the node\n");
    scanf("%d",&data);
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}
void inserthead() 
{
    struct node* new_node=create_node();
    if(head==NULL) 
    {
          head=new_node;
          tail=new_node;
    } 
    else 
    {
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
    }
}
void insertend() 
{
    struct node* new_node=create_node();
    if(tail==NULL)
    {
        head=new_node;
        tail=new_node;
    } 
    else 
    {
        new_node->prev=tail;
        tail->next=new_node;
        tail=new_node;
    }
}
void insertpos()
{
    int p,i=0;
    struct node*new_node=create_node();
    printf("Enter the position to insert");
    scanf("%d",&p);
    temp=head;
    int j=0;
    while(temp!=NULL)
    {
	temp=temp->next;
	j++;
    }
    if(p<=0||p>=j+1)
    {
	printf("\n Invalid position");
    }
    if(head==NULL||p==1)
    {
	new_node->next=head;
	new_node->prev=NULL;
	head=new_node;
    }
    while(i<p)
    {
	temp=temp->next;
	i++;
    }
    new_node->prev=temp;
    new_node->next=temp->next;
    if(temp->next!=NULL)
	(temp->next)->prev=new_node;
    temp->next=new_node;
}                                         
void main()
{
	while(1)
    	{
	int ch1;
	printf("select your choice:");
	printf("\n 1.At begining 2.At a position 3.At End");
	scanf("%d",&ch1);
	switch(ch1)
	  {
		case 1:
			inserthead();
			break;
		case 2:
			insertend();
			break;
		case 3:
			insertpos();
			break;
          }
        }
    
}

    


