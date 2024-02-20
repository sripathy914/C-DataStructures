#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *l,*r;
}*h=NULL,*t=NULL,*n;
void Inorder(struct node *root)
{ 
    if(root==NULL)
    return;
    Inorder(root->l);
    printf("%d",root->data);
    Inorder(root->r);
}
void Preorder(struct node *root)
{ 
    if(root==NULL)
    return;
    printf("%d",root->data);
    Inorder(root->l);
    Inorder(root->r);
}
void Postorder(struct node *root)
{ 
    if(root==NULL)
    return;
    Inorder(root->l);
    Inorder(root->r);
    printf("%d",root->data);
}
int main()
{
    int i=-1,j=-1,b=1,flag=0;
    struct node *a[50];
    n=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&n->data);
    n->l=NULL;
    n->r=NULL;
    i++;j++;
    a[i]=n;
    h=a[i]; 
    while(b)
    {
        t=a[j];
        n=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&n->data);
        n->l=NULL;
        n->r=NULL;
        if(flag==0)
        {
            t->l=n;
            flag=1;
        }
        else
        {
            t->r=n;
            flag=0;
        }
        i++;
        a[i]=n;
        if(flag==0)
        {
            j++;
        }
        printf("continue?");
        scanf("%d",&b);
    }
    Inorder(h);
    printf("\n");
    Preorder(h);
    printf("\n");
    Postorder(h);
    printf("\n");
    
}
