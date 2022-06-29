#include<stdio.h>
int main()
{
    int arr[100],size,i,sum=0;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(1)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    
}