#include<stdio.h>
int sod(int);
int main()
{
int no;
while(no>0)
{
scanf("%d",&no);

printf("The sum of digits of the %d is %d",no,sod(no));
}
}
int sod(int n)
{
if(n<=0) return 0;
return n%10+sod(n/10);

}
