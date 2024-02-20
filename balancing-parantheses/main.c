#include <stdio.h>
#include<string.h>
int top=-1;
void push() 
{
    ++top;
}
void pop()
{
    --top;
}
void main()
{
    char a[10];
    int i=0;
    scanf("%s",a);
    int l=strlen(a);
    while(a[i]!='\0') 
    {
        if(a[i]=='(')
        push();
        if(a[i]==')')
        pop();
        i++;
    }
    if(top==-1)
    printf("Balanced");
    else
    printf("Unbalanced");
}
