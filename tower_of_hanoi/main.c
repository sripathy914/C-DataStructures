#include<stdio.h>
void toh(int n,int s,int t,int d)
{ 
    if(n>0)
    {
        toh(n-1,s,d,t);
        printf("%d-->%d",s,d);
        printf("\n");
        toh(n-1,t,s,d);
    }
}
int main()
{
    int n,s,t,d;
    printf("\nEnter n : \nEnter s : \nEnter t : \nEnter d :\n");
    scanf("%d %d %d %d",&n,&s,&t,&d);
    toh(n,s,t,d);
}

