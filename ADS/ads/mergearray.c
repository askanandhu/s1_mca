#include<stdio.h>

void main()
{
    int m,n;
    printf("enter the size of array 1 ");
    scanf("%d",&m);
    int a[m];
    printf("enter the array elements  ");
    for (int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the size of array 2 ");
    scanf("%d",&n);
    int b[n];
    printf("enter the array elements  ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int o=m+n;
    for (int i=0; i<o;i++)
    {
        a[i+m]=b[i];
    }
    printf("jbj\n");
    for (int i=0; i<o;i++)
    {
        printf("%d\n",a[i]);
    }

}