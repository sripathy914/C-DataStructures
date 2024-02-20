#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*h=NULL,*t=NULL,*n,*s;
int main()
{
int m,a,b,c,d,e=1,x,y=1,z=1;
while(e)
{
printf("1 for checking\n2 for creating linked list\n3 for deletion at last\n4 for delete at beginning\n5 delete at position\n6 to display");
scanf("%d",&m);
switch(m)
{
case 1:
if(h==NULL)
printf("\nlist is empty");
else
printf("\nlist isn't empty'");
break;
case 2:
a=1;
while(a)
{
    printf("\nEnter number : ");
n=(struct node *)malloc(sizeof(struct node));
scanf("%d",&n->data);
n->next=NULL;
if(h==NULL)
{
h=n;
t=h;
}
else
{
t->next=n;
t=n;
}
printf("\n1 to create\n0 to stop");
scanf("%d",&a);
}
break;
case 3: 
b=1;
while(b)
{
    t=h;
    while(t->next!=NULL)
{
    s=t;
    t=t->next;
}
s->next=t->next;
printf("Element deleted");
printf("\n1 to delete\n0 to stop");
scanf("%d",&b);
}
break;
case 4:

    t=h->next;
    h=t;
    printf("Element deleted");
break;

case 5:
y=1;
while(y)
{t=h;
printf("\nenter element to delete");
scanf("%d",&x);
while(t->next!=NULL && t->data!=x)
{
    s=t;
    t=t->next;
}
s->next=t->next;
printf("Element deleted");
printf("\npress 1 to continue\npress 0 to stop");
scanf("%d",&y);
}break;

   case 6:
    t=h;
    while(t->next!=NULL)
    {
        printf("%d-->",t->data);
        s=t;
        t=t->next;
        
    }
    printf("%d-->",t->data);
    printf("NULL");
}
    printf("\n1 to view listed options\n0 to stop");
    scanf("%d",&e);
}
}



