#include<stdio.h>
#include<stdlib.h>
int u_size;
int universal( int v, int u[])
{
    for( int i=0;i<u_size;i++)
    {
        if (u[i]==v)
        {
            return 1;
        }
    }
    return 0;
}
int duplicate( int v, int a[], int pos)
{
    for(int i=0;i<=pos;i++)
    {
        if(v==a[i])
            return 0;
    }
    return 1;

}
void bitstring(int u[],int set[],int size, int c[])
{
    for(int i=0;i<u_size;i++)
    {
            for(int j=0;j<size;j++)
            {
                if(set[j]==u[i])
                {
                    c[i]=1;
                    break;
                }
                else
                    c[i]=0;
            }
    }
}
void union_set(int seta[],int setb[],int u[])
{
    for(int i=0;i<u_size;i++)
    {
        if (seta[i]==1 || setb[i]==1)
            u[i]=1;
        else
            u[i]=0;
    }
}
void intersect_set(int seta[],int setb[],int u[])
{
    for(int i=0;i<u_size;i++)
    {
        if(seta[i]==1 && setb[i]==1)
            u[i]=1;
        else
            u[i]=0;

    }
}
void difference_set(int seta[],int setb[],int u[])
{
    for (int i=0;i<u_size;i++)
    {
        if( seta[i]==1 && setb[i]==0)
            u[i]=1;
        else
            u[i]=0;

    }
}
void main()
{
    printf("enter the size of universal set ");
    scanf("%d",&u_size);
    int u[u_size],a_bit[u_size],b_bit[u_size],set_union[u_size],inter[u_size],diff[u_size];
    printf("enter the universal set elements : ");
    for (int i=0;i<u_size;i++)
    {
        scanf("%d",&u[i]);
    }
    int sa,sb;
    printf("enter set a size; ");
    scanf("%d",&sa);
    if(sa>u_size)
        sa=u_size;
    int a[sa],v;
    printf("enter the set a elememnts ");
    for (int i=0;i<sa;i++)
    {
        printf("enter element %d: ",i);
        scanf("%d",&v);
        if(universal(v,u)==1 && duplicate(v,a,i-1)==1)
            a[i]=v;
        else
        {
            printf("invalid input  ");
            i--;
        }
    }
    printf("enter the size of set b:");
    scanf("%d",&sb);
    if(sb>u_size)
        sb=u_size;
    int b[sb];
    printf("enter the set elements ");
    for (int i=0;i<sb;i++)
    {
        printf("enter elements %d:",i);
        scanf("%d",&v);
        if(universal(v,u)==1&&duplicate(v,b,i-1)==1)
            b[i]=v;
        else
        {
            printf("invalid input  ");
            i--;
        }

    }
    bitstring(u,a,sa,a_bit);
    bitstring(u,b,sb,b_bit);
    printf("\nbit string a: ");
    for (int i=0;i<u_size;i++)
        printf("%d",a_bit[i]);
    printf("\nbit string b: ");

    for (int i=0;i<u_size;i++)
        printf("%d",b_bit[i]);
    union_set(a_bit,b_bit,set_union);
    intersect_set(a_bit,b_bit,inter);
    printf("\nunion :");
    for (int i=0;i<u_size;i++)
        printf("%d",set_union[i]);
    printf("\nINtersection");
    for(int i=0;i<u_size;i++)
        printf("%d",inter[i]);
    difference_set(a_bit,b_bit,diff);
    printf("\nA-B\n");
    for(int i=0;i<u_size;i++)
        printf("%d",diff[i]);
}