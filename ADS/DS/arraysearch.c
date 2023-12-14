/*#include <stdio.h>
void main()
{
	printf("hello");
}*/

/*#include <stdio.h>
void main()
{
	int x,y;
	printf("Enter two numbers\n");
	scanf("%d%d",&x,&y);
	printf("Sum is %d",x+y);
}
*/

#include <stdio.h>
void main()
{
	int n;
	printf("enter the number of elements in the array  ");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements are\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}


	printf("ENETR THE ELEMENT TO BE SEARCHED\n");
	int x;
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
		{
			printf("ELEMENT %d FOUND AT %dth POSITION",x,i+1);
			
		}
	}

}
