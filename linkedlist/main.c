#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void print()
{
    struct node *p=head;
    while(p!=NULL)
    {
        printf(" %d - ",p->data);
        p=p->next;
    } 
    printf(" NULL");
}
void insert(int data)
{
    struct node *l=(struct node *)malloc(sizeof(struct node));
    l->data=data;
    l->next=head;
    head=l;
}
int main()
{
    insert(11);
    insert(22);
    insert(33);
    insert(44);
    print();
}
