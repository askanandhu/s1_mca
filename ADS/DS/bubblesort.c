#include <stdio.h>
void main()
{
	void bubblesort(int ar[],int n);
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
	bubblesort(a,n);
}

void bubblesort(int ar[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j+1<n;j++)
		{
			if(ar[j]>ar[j+1])
			{
				int temp=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp;
			}
		}
	}
printf("\nsorted array is\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",ar[i]);
	}

}
		

