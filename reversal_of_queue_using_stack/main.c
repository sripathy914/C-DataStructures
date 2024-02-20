#include<stdio.h>
int stk[50],que[50],f=-1,top=-1,r=-1;
void enqueue(int a)
{
    que[++r]=a;
    if(f==-1) 
    f=0; 
}
int dequeue()
{
    int k=que[f];
    f++;
    if(f>r)
    {
        f=-1;r=-1;
    }
    return k;
}
void push(int s)
{
    stk[++top]=s;
}
int pop()
{
    return stk[top--];
}
int main(void)
{
    int n,m;
    printf("Enter no.of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        enqueue(m);
    }
    while(r!=-1)
    push(dequeue());
    while(top!=-1)
    enqueue(pop());
    for(int i=0;i<n;i++)
    printf("%d ",que[i]);
}




