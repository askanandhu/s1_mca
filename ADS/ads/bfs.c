#include <stdio.h>
#include <stdlib.h>
int MAX =10,rear=-1, front = -1;
int a[10];
void enqueue(int n)
{
    if(rear==MAX-1)
        return;
    if(rear==-1)
        front=0;
    rear++;
    a[rear]=n;

}
int dequeue()
{
    if (front == -1)
        return -1;
    int v=a[front];
    front++;
    return v;
}
void main()
{
    int n,start;
    printf("enter the number of nodes");
    scanf("%d",&n);
    int a[n][n],v[n];
    printf("enter adjacency matrix of the graph: ");
    for (int i=0;i<n;i++)
    {
        v[i]=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("enter the starting node(0-%d):",(n-1));
    scanf("%d",&start);
    printf("\nBFS traversal\n");
    enqueue(start);
    v[start]=1;
    while(front<=rear)
    {
        start=dequeue();
        printf("%d",start);
        for(int i=0; i<n;i++)        // Traverse adjacent nodes

        {
            if(a[start][i]==1 && v[i]==0)
            {
                enqueue(i);
                v[i]=1;
            }
        }
    }
}