#include<stdio.h>
#include<stdlib.h>
int queue[100];
int size=5;
front=-1;
rear=-1;
void enqueue();
void dequeue();
void show();
void main()
{
    int op;
    while(1)
    {
    printf("ENTER THE OPERATION\n1.INSERTION\n2.DELETION\n3.SHOW\n4.EXIT\n");
    scanf("%d",&op);
    switch(op)
	{
	  case 1:
		enqueue();
		break;
	  case 2:
		dequeue();
		break;
	  case 3:
		show();
		break;
  	  case 4:
		exit(0);
	  default:
		break;
	}
    }
}
void enqueue()
{
	int x;
	if(rear==size-1)
	{
	 printf("queue overflow\n");
	}
	else
	{
	 if (front==-1)
		front=0;
	 rear=rear+1;
	 printf("enter the queue element  :");
	 scanf("%d",&x);
	 queue[rear]=x;
	}
}
void dequeue()
{
	if(front==-1 ||front>rear)
	{
	 printf("queue underflow\n");
	}
	else
	{
	 printf("element deleted from the queue is %d   \n",queue[front]);
	 front=front+1;
	}
}
void show()
{
	printf("queue  ");
	for(int i=front;i<=rear;i++)
		printf("%d\t",queue[i]);
}
	 	
