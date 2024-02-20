#include <stdio.h>
int main()
{
    int r,c;
    int flag=0;
    scanf("%d%d",&r,&c);
    int arr1[r][c];
    int arr2[r][c];
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&arr1[i][j]);
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&arr2[i][j]);
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    if(arr1[i][j]==arr2[i][j])
    flag=1;
    else
    {
        flag=0;
        break;
    }
    if(flag==0)
    printf("Not identical");
    else
    printf("identical");
}
