#include<stdio.h>
#include<stdlib.h>
top=-1, stack[100];
void push();
void pop();
void show();
void main()
{
    int op;
    while(1)
    {
    printf("ENTER THE OPERATION\n1.push\n2.POP\n3.SHOW\n4.EXIT\n");
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
		printf("OVER FLOW \n");
	}
	else
	{
		int x;
		printf("  enter the element to be added   ");
		scanf("%d",&x);
		top=top+1;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
		printf("   element popped is %d    ",stack[top]);
		top=top-1;
	}
}
void show()
{
	printf("stack is   ");
	for(int i=0;i<=top;i++)
		printf("%d",stack[i]);
}
