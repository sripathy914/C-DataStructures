#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
char arr[50],arr1[50],top=-1;
void push(char c)
{
    arr[++top]=c;
}
void pop()
{
    printf("%c",arr[top--]); 
}
int main()
{
   char x='\0';
   char c[100];
   gets(c);
   int l=strlen(c);
   for(int i=0;i<l;i++)
   push(c[i]);
   for(int j=0;j<l;j++)
   pop(); 
}