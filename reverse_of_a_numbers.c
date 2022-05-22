#include<stdio.h>
int main()
{
    int n,rev,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rev=n%10;
        sum=sum*10+rev;
        n=n/10;
    }
    printf("%d",sum);
}