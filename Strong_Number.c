#include<stdio.h>
int main()
{
    int num,rem,sum=0,pro,i,temp;
    scanf("%d",&num);
    temp=num;
    while(num)
    {
    	i=1,pro=1;
      rem = num % 10;
      while(i <= rem){
         pro = pro * i;
         i++;
      }
      sum = sum + pro;
      num = num / 10;
   }
    if(temp==sum)
    printf("The number %d is a strong number",temp);
    else
    printf("The number %d is not a strong number",temp);
    return 0;
}