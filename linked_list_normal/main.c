#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp=NULL,*new;
int main()
{
    int i=0;
    while(i<5)
    {
        new=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
            temp=head;
        }
        else
        {
            temp->next=new;
            temp=new;
        }
        i++;
    } 
     temp=head;
     while(temp->next!=NULL)
     {
         printf("%d ",temp->data);
         temp=temp->next;
     }
     printf("%d",temp->data);
}