#include<stdio.h>
#include<stdlib.h>
int c=0;
void main()
{
    int n;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    int a[n][n],v[n];
    printf("enter the adjacency matrix of DAG ");
    for (int i=0;i<n;i++)
    {
        v[i]=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\ntopological sorting\n");
    for(int i=0;i<n;i++)
    {
        c=0;
        if(v[i]==0)
        {
            for(int j=0;j<n;j++)
            {
                if(a[j][i]!=0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                v[i]=1;
                printf("%d",i);
                for(int j=0;j<n;j++)
                {
                    a[i][j]=0;
                }
                i=-1;

            }
        }
    }    
}