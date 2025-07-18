#include<stdio.h>
int fon(int no)
{
if(no==0) return 1;
else{
return no * fon(no-1);
}
}
int main()
{
int no;


scanf("%d",&no);

printf("The factorial of %d is %d",no,fon(no));
return 0;
}
