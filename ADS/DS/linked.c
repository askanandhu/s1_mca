#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
void insetion();
void insertbeg();
void insertend();
int pos,i;
struct node *head, *newnode,*temp;
void main()
{
	int ch1;
	head=(struct node*)malloc(sizeof(struct node));
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n select your choice:");
	printf("\n 1. Insertion 2.Deletion 3.Display 4.Exit");
	scanf("%d",ch1);
	switch(ch1)
	{
		case 1: 
			insertion();
			break;
		case 2:
			deletion();
			break;
		case 3:
			display();
			break;
		case 4:
			exit();
			break;
      }
      printf("\n the element inserted successfully");
}	
void insertion()
{       
        int ch2;
	printf("select your choice:");
	printf("\n 1.At begining 2.At a position 3.At End");
	scanf("%d",&ch2);
	switch(ch2)
	  {
		case 1:
			insertbeg();
			break;
		case 2:
			insertpos();
			break;
		case 3:
			insertend();
			break;
          }
}

  void insertbeg()
	 {
	    printf("Enter the data to be inserted:");
	    scanf("%d",&newnode->data);
	    newnode->next=head;
	    head=newnode;

         }

	void insertend()
	  {
       		printf("Enter the element to be inserted:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		head=newnode;
		temp=head;
		while(temp->next!=NULL)
		 {
			temp=temp->next;
		 }
		temp->next=newnode;
	 }
       void insertpos()
         {
           printf("Enter the position to be inserted ");
           scanf("%d",&pos);
	   if(pos>sizeof(struct node))
	    {
		printf("Invalid position");
	    }
	   else
	      { 
                temp=head;
		while(i<pos)
                {
                  temp=temp->next;
                  i++;
                }
              }
              printf("Enter the data to be inserted");
              scanf("%d",&newnode->data);
              newnode->next=temp->next;
              temp->next=newnode;
      }

