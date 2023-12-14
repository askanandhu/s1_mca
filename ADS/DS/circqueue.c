#include<stdio.h>
#include<stdlib.h>
int queue[10];
int front=-1;
int rear=-1;
max=6;
void enqueue(int ele)
{
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=ele;
	}
	else if((rear+1)%max==front)
	{
		printf("queue overflow");
	}
	else
	{
		rear=(rear+1)%max;
		queue[rear]=ele;
	}
}
void dequeue()
{
	if((front==-1)&&(rear==-1))
		printf("underflow");
	else if(front==rear)
	{
		printf("the element deleted is %d",queue[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("the element deleted is %d",queue[front]);
		front=(front+1)%max;
	}
}
void display()
{
	int i=front;
	if((front==-1)&&(rear==-1))
	{
		printf("queue is empty");
	}
	else
	{
		printf("elemts in queue are;;");
		while(i<=rear)
		{
			printf("%d\t",queue[i]);
			i=(i+1)%max;
		}
	}
}
void main()
{
    int x,op;
    while(1)
    {
    printf("ENTER THE OPERATION\n1.INSERTION\n2.DELETION\n3.SHOW\n4.EXIT\n");
    scanf("%d",&op);
    switch(op)
	{
	  case 1:
		printf("enter the element to insert:");
		scanf("%d",&x);
		enqueue(x);
		break;
	  case 2:
		dequeue();
		break;
	  case 3:
		display();
		break;
  	  case 4:
		exit(0);
	  default:
		break;
	}
    }
}
