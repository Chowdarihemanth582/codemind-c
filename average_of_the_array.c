#include<stdio.h>
int main()
{
    int arr[100],n,i;
	float avg,count=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
        count++;
    }
    avg=sum/count;
    printf("%.2f",avg);
}