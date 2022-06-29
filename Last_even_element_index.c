#include<stdio.h>
int main()
{
    int arr[100],n,i,ei;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            ei=i;
        }
    }
    printf("%d",ei);
}