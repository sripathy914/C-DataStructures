#include <stdio.h>
int main()
{
    int n,temp,found=0;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            found=1;
            else
            found=0;
        }
        if(found==1)
        continue;
        else
        arr2[i]=arr1[i];
    }
    for(int i=0;i<n;i++)
    printf("%d",arr2[i]);
    
}

