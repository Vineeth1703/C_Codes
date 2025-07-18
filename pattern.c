#include<stdio.h>
int sum(int no)
{
if(no==0) return 1;
else{
return no+sum(no-1);
}
}
int main()
{
int no;


scanf("%d",&no);

printf("The summation of %d is %d",no,sum(no));

return 0;
}
