#include<stdio.h>
int main()
{
    int n1,n2,temp,gcd;
    scanf("%d%d",&n1,&n2);
    while(n2!=0)
    {
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    gcd=n1;
    printf("%d",gcd);
}