#include<stdio.h>
int reverse(int num)
{
    int rem,sum=0;
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    return sum;
}
int main()
{
    int n,rev,c=0,r;
    scanf("%d ",&n);
    rev=reverse(n);
    while(rev)
    {
        r=rev%10;
        if(r==6 && c==0)
        {
            printf("9");
            c=1;
        }
        else
        {
            printf("%d",r);//9 9 6 9
        }
        rev=rev/10;
    }
}