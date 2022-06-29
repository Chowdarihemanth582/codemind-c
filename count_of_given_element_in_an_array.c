#include<stdio.h>
int main()
{
	int arr[100],n,i,e,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(e==arr[i])
		{
			count++;
		}
	}
	printf("%d",count);
}