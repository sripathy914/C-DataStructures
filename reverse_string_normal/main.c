#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char c[50],d[50];
    gets(c);
    for(int i=strlen(c)-1;i>=0;i--)
    printf("%c",c[i]);
}