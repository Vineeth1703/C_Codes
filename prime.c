#include<stdio.h>
int isprime(int,int);
void main()
{
 int no;
 scanf("%d",&no);
 
 printf("%d is a %s",no,isprime(no,2)?"prime number":"not a prime number");
}
int isprime(int no,int div)
{
   
 if(no%div==0){return 0;}
 if(div>(no/2)) {return 1;}
 return isprime(no,div+1); 
}
