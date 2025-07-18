#include<stdio.h>
int reve(int,int);
int main()
{
int no;
scanf("%d",&no);
printf("The Reverse of the given Nuber %d is %d",no,reve(no,0));
}
int reve(int num,int rev)
{
  if (num==0)
  {return rev;}
    return reve(num/10,rev*10+num%10);}