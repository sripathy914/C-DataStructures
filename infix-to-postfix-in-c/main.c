#include <stdio.h>
#include<ctype.h>
char a[50];
int top=-1;
void push(char s)
{
    a[++top]=s;
}
char pop()
{
    if(top=-1)
    return -1;
    else
    return a[top--];
}
int priority(char s)
{
    if(s=='*' || s=='/')
    return 2;
    if(s=='+' || s=='-')
    return 1;
    if(s=='(')
    return 0;
}
int main()
{
    char exp[30],*e,x;
    scanf("%s",exp);
    e=exp;
    while(*e!='\0')
    {
        if(isalnum(*e))
        printf("%c",*e);
        else if(*e=='(')
        push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
                printf("%c",x);
        }
        else
        {
            while(priority(a[top])>=priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top=-1)
    {
        printf("%c",pop());
    }
}
