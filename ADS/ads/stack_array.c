#include<stdio.h>
#include<stdlib.h>
int top=-1, stack[100];
void push();
void pop();
void show();
void main()
{
    int op;
    while(1)
    {
        printf("enter the operation\npush\npop\nshow\nexit\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
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
void push()
{
    int x;
    if(top==10)
    {
        printf("overflow");

    }
    else
    {
        int x;
        printf("enter the element ");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;

    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow  ");
    }
    else
    {
        printf("elelment popped is %d ",stack[top]);
        top=top-1;
    }
}
void show()
{
    printf("stack is   ");
    for(int i=0;i<=top;i++)
    {
        printf("%d   ",stack[i]);
    }

}