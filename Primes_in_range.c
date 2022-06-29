#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,j,c,c1=0;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=n;i<=m;i++)
	{
	    c=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				c=0;
				break;
			}
		}
		if(c==1&&i!=1)
		{
			c1++;
		}
	}
	printf("%d",c1);
}