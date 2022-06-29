#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]%2==1 && arr[i+2]%2==1 && arr[i+1]%2==1)
        {
            c++;
        }
    }
    printf("%d",c);
}