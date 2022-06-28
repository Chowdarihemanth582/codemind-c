#include<stdio.h>
int reverse(int n)
{
   int sum=0,rem;
   while(n!=0)
   {
       rem=n%10;
       sum=sum*10+rem;
       n=n/10;
   }
   return(sum);
}

int main()
{
    int num,rev,sqr,sqr1,ans;
    scanf("%d",&num);
    sqr=num*num; //144
    rev=reverse(num);
    sqr1=rev*rev;   //441
    ans=reverse(sqr1);  //441
    if(ans==sqr) 
    {
    	printf("True");
	}
	else
	{
		printf("False");
	}
}