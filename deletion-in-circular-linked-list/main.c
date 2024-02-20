#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp=NULL,*new,*s;
int main()
{
    int a=1,b=1,c=1,d=1,e=1,i,j,k;
    while(e)
    {
        printf("1 to check\n2 to create\n3 to delete at last\n4 to delete at beginning\n5 to delete at position\n6 to display");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
            if(head==NULL)
            printf("list is empty");
            else
            printf("list isn't empty");
            break;
            case 2:
            while(a)
            {
                new=(struct node *)malloc(sizeof(struct node));
                printf("\nEnter data");
                scanf("%d",&new->data);
                new->next=NULL;
                if(head==NULL)
                {
                    head=new;
                    temp=head;
                    temp->next=head;
                }
                else
                {
                    temp->next=new;
                    temp=new;
                    temp->next=head;
                }
                printf("\n1 to continue\n0 to stop");
                scanf("%d",&a);
            }
            break;
            case 3:
            temp=head;
            while(d)
            {
            while(temp->next!=head)
            {
                s=temp;
                temp=temp->next;
            }
            s->next=head;
            printf("\n1 to continue\n0 to stop");
            scanf("%d",&d);
            }
            break;
            case 4:
            temp=head;
                while(b)
                {
                temp=head->next;
                head=temp;
                printf("\n1 to continue\n0 to stop");
                scanf("%d",&b);
                }
                break;
            case 5:
            while(c)
            {printf("\nEnter number : ");
                scanf("%d",&k);
                while(temp->data!=k && temp->next!=head)
                {
                    s=temp;
                    temp=temp->next;
                }
                if(temp->data==k)
                {
                    s->next=temp->next;
                    temp->next=NULL;
                    temp=s->next;
                }
                printf("\n1 to continue\n0 to stop");
                scanf("%d",&c);
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
        }
        printf("\n1 to view options\n0 to stop");
        scanf("%d",&e);
    }
}
