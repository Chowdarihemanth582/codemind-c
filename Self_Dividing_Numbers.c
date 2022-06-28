#include<stdio.h>
int digc(int n)
{
	int c=0;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    return c;
}

int self(int num)
{
	int temp=num;
	int rem,a=0;
	while(num)
    {
      	rem=num%10;
      	if(rem==0)
      	{
      		break;
		}
       	if(temp%rem==0)
       	{
       		a++;
       	}
		num=num/10;
	}
	return a;
}
int main()
{
    int l,u,i,j;
    scanf("%d",&l);
    scanf("%d",&u);
    for(i=l;i<=u;i++)
    {
    	if(self(i)==digc(i))
    	{
    		printf("%d ",i);
		}
	}
}