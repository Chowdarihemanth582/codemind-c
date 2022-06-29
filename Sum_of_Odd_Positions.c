#include<stdio.h>
int main()
{
    int arr[100],size,i,sum=0;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
       if(i%2==1)
       {
           sum+=arr[i];
       }
    }
    printf("%d",sum);
}