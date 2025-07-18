#include<stdio.h>
void main()
{
 int temp;
 int sum=0;

for(int i=100;i<999;i++)
  {
    temp=i;
    sum=(temp%10)*(temp%10)*(temp%10);
    temp/=10;
    sum+=(temp%10)*(temp%10)*(temp%10);
    temp/=10;
    sum+=(temp%10)*(temp%10)*(temp%10);
    if(sum==i)
    {
     printf("%d\n",i);
    }

  }

}
