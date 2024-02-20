#include<stdio.h>
#include<stdlib.h>
struct node
{
    int r,c,data;
    struct node *next;
}*h=NULL,*t=NULL,*t1=NULL,*new;
void create_sparse()
{
    int v=1;
    while(v)
    {
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter x : ");
    scanf("%d",&new->r);
    printf("\nEnter y : ");
    scanf("%d",&new->c);
    printf("\nEnter value : ");
    scanf("%d",&new->data);
    new->next=NULL;
    if(h==NULL)
    {
        h=new;t=h;
    }
    else
    {
        t->next=new;
        t=new;
    }
    printf("\n1 to continue\n0 to stop ");
    scanf("%d",&v);
        
    }
}
void sum_of_row()
{
    t=h;int i=0,sum=0;
    while(i<3)
    {
        while(t!=NULL)
        {  
            if(t->r==i)
            sum=sum+t->data;
            t=t->next;
        }
        i++;
    }
    printf("sum of row = %d",sum);
} 
void sum_of_column()
{
    t=h;int j=0,sum=0;
    while(j<3)
    {
        while(t!=NULL)
        {
            if(t->c==j)
            sum=sum+t->data;
            t=t->next;
        }
        j++;
    }
    printf("sum of column = %d",sum);
}
int main()
{
    int a=1,b;
    while(a)
    {
        printf("\n1 to create sparse matrix\n2 to sum of rows\n3 to sum of column ");
        scanf("%d",&b);
        switch(b)
        {
            case 1:
            create_sparse();
            break;
            case 2:
            sum_of_row();
            break;
            case 3:
            sum_of_column();
            break;
        }
        printf("\n1 to view options\n0 to stop ");
        scanf("%d",&a);
    }
    
}

