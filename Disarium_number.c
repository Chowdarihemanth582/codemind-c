#include<stdio.h>
#include<math.h>
int dig_c(int num)
{
    int c=0;
    while(num!=0)
    {
        c++;
        num=num/10;
    }
    return c;
}


int main()
{
    int n,rem,temp,i,sum=0,count;
    scanf("%d",&n);
    temp=n;
    count=dig_c(n);
    while(n!=0)
    {
    	i=count;
        rem=n%10;
        sum+=pow(rem,i);
        //printf("%d ",sum);
        n=n/10;
        count--;
    }
    if(sum==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}