#include<stdio.h>
int main()
{
    int n,x,y,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d %d",&x,&y);
        sum=x+y;
        printf("%d
",sum);
        n--;
        sum=0;
    }
}