#include<stdio.h>
int main()
{
 int n,temp,sum=0;
 scanf("%d",&n);
 temp=n;
 while(temp)
 {
     sum=sum+temp%10;
     temp=temp/10;
 }
 int res=n%sum;
 if(res==0)
 {
     printf("True");
 }
 else
 {
     printf("False");
 }
}