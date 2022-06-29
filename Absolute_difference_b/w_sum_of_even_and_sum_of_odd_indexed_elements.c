#include<stdio.h>
int main()
{
    int arr[100],size,i,sum=0,sum1=0,diff;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        {
            sum+=arr[i];
        }
        else
        {
            sum1+=arr[i];
        }
    }
    if(sum>sum1)
    {
        diff=sum-sum1;
    }
    else
    {
        diff=sum1-sum;
    }
    printf("%d",diff);
    
}