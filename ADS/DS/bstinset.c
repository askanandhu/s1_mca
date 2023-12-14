#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *lp,*rp;
	struct node *newnode;
};
struct node* newnode(int x)
{
  struct node *temp;
  temp=malloc(sizeof(struct node));
  temp->data=x;
  temp->lp=NULL;
  temp->rp=NULL;

  return temp;
}

int search(struct node *root,int x)
{
if (root==NULL||root->data==x)
return root;
else if(x>root->data)
return search(root->rp,x);
else
return search(root->lp,x);
}

int insert(struct node *root,int x)
{
if(root==NULL)
return newnode(x);
else if(x>root->data)
root->rp=insert(root->rp,x);
else
root->lp=insert(root->lp,x);
return root;
}

int delete(struct node *root,int x)
{
if(root==NULL)
return NULL;
if(x>root->data)
root->rp=delete(root->rp,x);
else if(x<root->data);
else
{
if(root->lp==NULL&&root->rp==NULL)
free(root);
return NULL;
}
if(root->lp==NULL||root->rp==NULL)
{
struct node *temp;
if(root->lp==NULL)
temp=root->rp;
else
temp=root->lp;
free(root);
return temp;
}
else
{
struct node *temp=minimum(root->rp);
root->data=temp->data;
root->rp=delete(root->rp,temp->data);
}
return root;
}

int minimum(struct node *root)
{
if(root==NULL)
return NULL;
else if(root->lp!=NULL)
return minimum(root->lp);
return root;
}

void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->lp);
printf("%d ",root->data);
inorder(root->rp);
}
} 
 int main()
{
  struct node *root;
        root=newnode(20);
	insert(root,5);
        insert(root,1);
	insert(root,15);
        insert(root,9);
	insert(root,7);
        insert(root,12);
	insert(root,30);
        insert(root,25);
	insert(root,40);
	insert(root,45);
	insert(root,42);
  inorder(root);
  printf("\n");
	root=delete(root,1);
	root=delete(root,45);
 inorder(root);
 printf("\n");
 return 0;
}
















































