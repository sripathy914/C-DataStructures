#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
}*h=NULL,*t=NULL,*n,*s=NULL;
int main()
{
	int z=1,a,b,c,d,e,j,flag=0;
	while(z)
	{ 
	printf("\n1 for checking\n2 for inserting at last\n3 for inserting at beginning\n4 for inserting between\n5 for display");
	scanf("%d",&e);
	switch(e)
	{
		case 1:
			if(h==NULL)
			printf("\nlist is empty");
			else
			printf("\nlist is not empty");
			break;
		case 2:
		a=1;
		    while(a)	
		    {
			    printf("\nenter value");
			    n=(struct node *)malloc(sizeof(struct node));
			    scanf("%d",&n->data);
			    n->next=NULL;
			
				if(h==NULL)
				{
					h=n;
					t=h;
					flag=1;
				}
				else
				{
					t->next=n;
					t=n;
				}
				printf("\n1 to continue\n0 to stop");
				scanf("%d",&a);
			}
		break;
		case 3:
		b=1;
		while(b)
			{
			printf("\nenter value");
			n=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&n->data);
			n->next=NULL;
					
				if(flag==0)
				{
					h=n;
					t=h;
					flag=1;
				}
				else
				{
					n->next=h;
					h=n;
				}
				printf("\n1 to continue\n0 to stop");
				scanf("%d",&b);
			}
			break;
		case 4:
		c=1;
		while(c)
		{
			printf("\nenter value");
			n=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&n->data);
			t=h;
			
			printf("\nenter number to insert between");
			scanf("%d",&j);
			while(t->data!=j&&t->next!=NULL)
			{
			    s=t;
				t=t->next;
			}
			if(t->data==j)
			{
				n->next=t;
				s->next=n;
				n=NULL;
				t=NULL;
			}
        printf("\n1 to continue\n0 to stop");
        scanf("%d",&c);
        
	}
	break;
		case 5:
			d=1;
			while(d)
			{t=h;
			while(t->next!=NULL)
			{
				printf("|%d|==>",t->data);
				t=t->next;	
			}
			printf("|%d|==>NULL",t->data);
			printf("\n1 to continue\n0 to stop");
			scanf("%d",&d);
	       }
	       break;
	    
	}
	printf("\n1 to view options\n0 to stop using");
	scanf("%d",&z);
	}
	
}

