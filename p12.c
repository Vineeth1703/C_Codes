#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n;
 int sum,m;
  printf("enter a digit:\n");
  scanf("%d",&n);
  while(n>0)
  {
    m=n%10;
    n=n/10;
    sum=sum+m;
  }

printf("sum:%d",sum);
}
