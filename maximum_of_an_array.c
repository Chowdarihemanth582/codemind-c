#include<stdio.h>
int main()
{
    int arr[100],n,i,c=0,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(c==0)
        {
            c++;
            max=arr[i];
        }
        if(max<=arr[i])
        {
          max=arr[i]; 
        }
    }
    printf("%d",max);
    
}