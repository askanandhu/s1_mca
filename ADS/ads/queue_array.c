#include<stdio.h>
#include<stdlib.h>
int queue[100];
int size=5;
int front =-1;
int rear=-1;
void enqueue();
void dequeue();
void show();
void main()
{
    int op;
    while(1)
    {
        printf("enter the operation\ninsetion\ndeletion\nshow\nexit\n");
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
        printf("queue overflow ");
    }
    else
    {
        if(front==-1)
            front=0;
        rear=rear+1;
        printf("enter the element  ");
        scanf("%d",&x);
        queue[rear]=x;

    }
}
void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("queue underflow  ");

    }
    else
    {
        printf("element deleted is %d",queue[front]);
        front =front +1;
    }
}
void show()
{
    printf("queue   ");
    for(int i=front;i<=rear;i++)
    {
        printf("%d    ",queue[i]);
    }
}