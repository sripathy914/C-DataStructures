#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp=NULL,*tail=NULL,*new,*s;
int main()
{
    int a,b,c,d,e=1,i,j,k;
    while(e)
    {
        printf("\n1 for checking\n2 for creating\n3 for inserting at last\n4 for inserting at position\n5 for inserting at beginning\n6 for display\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
            if(head==NULL)
            printf("\nlist is empty");
            else
            printf("\nlist isn't empty");
            break;
            case 2:
           a=1;
            while(a)
            {
                printf("\nEnter number");
                new=(struct node *)malloc(sizeof(struct node));
                scanf("%d",&new->data);
                new->next=NULL;
                if(head==NULL)
                {
                    head=new;
                    temp=head;
                    temp->next=new;
                }
                else
                {
                    temp->next=new;
                    temp=new;
                    new->next=head;
                }
                printf("\n1 to continue\n0 to stop");
                scanf("%d",&a);
            }
            break;
            case 3:
            b=1;
            while(b)
            {
                printf("\nEnter number");
                new=(struct node *)malloc(sizeof(struct node));
                scanf("%d",&new->data);
                new->next=NULL;
                if(head==NULL)
                {
                    head=new;
                    temp=head;
                    temp->next=new;
                }
                else
                {
                    temp->next=new;
                    temp=new;
                    temp->next=head;
                }
                printf("\n1 to continue\n0 to stop");
                scanf("%d",&b);
            }
            break;
            case 4:
            c=1;
            while(c)
            {
                temp=head;
                printf("\nEnter number");
                new=(struct node *)malloc(sizeof(struct node));
                scanf("%d",&new->data);
                new->next=NULL;
                printf("\nEnter the before element");
                scanf("%d",&k);
                while(temp->data!=k && temp->next!=head)
                {
                    s=temp;
                    temp=temp->next;
                }
                    new->next=temp->next;
                    temp->next=new;
                printf("\n1 to continue\n0 to stop");
                scanf("%d",&c);
            }
                break;
            case 5:
            d=1;
            while(d)
            {
                printf("\nEnter number");
                new=(struct node *)malloc(sizeof(struct node));
                scanf("%d",&new->data);
                new->next=NULL;
                if(head==NULL)
                {
                    head=new;
                    temp=head;
                    temp->next=new;
                }
                else
                {
                    temp=head;
                    while(temp->next!=head)
                    {
                        temp=temp->next;
                    }
                    new->next=head;
                    temp->next=new;
                    head=new;
                }
                printf("\n1 to continue\n0 to stop");
                scanf("%d",&d);
            }
            break;

            case 6:
            temp=head;
            while(temp->next!=head)
            {
                printf("%d-->",temp->data);
                temp=temp->next;
            }
            printf("%d-->NULL",temp->data);
            break;
            
        }
        printf("\n1 to view the options\n0 to stop");
        scanf("%d",&i);
    }
}

